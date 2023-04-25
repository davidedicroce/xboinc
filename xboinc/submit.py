import json
import tarfile
from pathlib import Path
import tempfile
import datetime
import shutil

from .eos import mv_from_eos, mv_to_eos
from .sim_data import build_input_file
from .default_tracker import get_default_tracker
from .general import _pkg_root

temp    = tempfile.TemporaryDirectory()
tempdir = Path(temp.name).resolve()

def timestamp(ms=False):
    ms = -3 if ms else -7
    return datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S.%f")[:ms]

class SubmitJobs:

    def __init__(self, studyname):
        self._studyname = studyname
        self._submitfile = f"{self._studyname}__{timestamp()}.tar.gz"
        self._json_files = []
        self._bin_files = []
        tempdir.mkdir(parents=True, exist_ok=True)
        register_file = _pkg_root / 'register.json'
        if not register_file.exists(): 
            raise ValueError("User not yet registered. Register file not found in f'{register_file}'. Use xboinc.register() !")
        with register_file.open('r') as f:
            data = json.load(f)
            if 'user' in data and 'folder' in data and 'domain' in data:
                self._username     = data['user']
                self._submitfolder = Path(data['folder'])
                self._domain       = data['domain']
            else:
                raise ValueError("'user' or 'folder' fields not found in {}.".format(user_file))

    def __enter__(self, *args, **kwargs):
        return self

    def __exit__(self, *args, **kwargs):
        self._submit()
        temp.cleanup()

    def add(self, *, job_name, num_turns, line, particles, checkpoint_every=-1):
        filename = f"{self._username}__{timestamp(ms=True)}"
        json_file = Path(tempdir, f"{filename}.json")
        bin_file  = Path(tempdir, f"{filename}.bin")
        json_dict = {'study': self._studyname, 'user': self._username, 'job_name': job_name}
        with open(json_file, 'w') as fid:
            json.dump(json_dict, fid)
        build_input_file(name=bin_file, num_turns=num_turns, line=line,
                         particles=particles, checkpoint_every=checkpoint_every)
        self._json_files += [json_file]
        self._bin_files  += [bin_file]

    def _submit(self):
        with tarfile.open(tempdir / self._submitfile, "w:gz") as tar:
            for thisfile in self._json_files + self._bin_files:
                tar.add(thisfile, arcname=thisfile.name)
        if self._domain == 'eos' :
            mv_to_eos(tempdir / self._submitfile, self._submitfolder)
        elif self._domain == 'afs' :
            shutil.copy(tempdir / self._submitfile, self._submitfolder)
        else :
            raise ValueError(f'Unkown domain {self._domain}')
        # TODO: check that tar contains all files
        for thisfile in self._json_files + self._bin_files:
            thisfile.unlink()


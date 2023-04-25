import os
import json
import glob
import subprocess
from .general import _pkg_root
from .eos import mv_to_eos
import shutil
from pathlib import Path

def write_user_json(user, folder):
    user_file = _pkg_root.joinpath('register.json')
    folder = Path(folder)
    if folder.parts[1] == 'eos':
        domain = 'eos' 
    elif folder.parts[1] == 'afs':
        domain = 'afs'
    else: 
        raise ValueError(f"Path {folder} not accessible by boinc server!")
    data = {'user': user, 'folder': folder.as_posix(), 'domain': domain}
    with open(user_file, "w") as f:
        json.dump(data, f)
    return folder

def afs_add_xboinc_acl(server_account, folder):
    if os.path.isdir(folder):
        subprocess.call(['fs', 'sa', folder, server_account, 'rlwidk'])
        print("Added user '{}' to folder '{}' ACL.".format(server_account, folder))
    else:
        raise ValueError("Folder '{}' not found.".format(folder))

def afs_remove_xboinc_acl(server_account, folder):
    if os.path.isdir(folder):
        subprocess.call(['fs', 'setacl', '-dir', folder, '-acl', server_account, 'none'])
        print("Added user '{}' to folder '{}' ACL.".format(server_account, folder))
    else:
        raise ValueError("Folder '{}' not found.".format(folder))

def afs_print_acl(folder):
    if os.path.isdir(folder):
        subprocess.call(['fs', 'listacl', folder])
    else:
        raise ValueError("Folder '{}' not found.".format(folder))

def register(user, folder):
    server_account='sixtadm'
    write_user_json(user, folder)
    afs_add_xboinc_acl(server_account, folder)
    afs_print_acl(folder)
    shutil.copy( _pkg_root / 'register.json', _pkg_root / f'register_{user}.json' )
    mv_to_eos(_pkg_root / f'register_{user}.json', '/eos/user/s/sixtadm/spooldirs/xtrack/drop')

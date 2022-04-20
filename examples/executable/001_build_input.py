import xobject as xo
import xtrack as xt

from .default_tracker import get_default_tracker
from .sim_data import LineMetaData, SimState, SimConfig

def build_input_file(num_turns, line, particles):

    # Assemble data structure
    simbuf = xo.ContextCpu().new_buffer()
    sim_config = SimConfig(buffer_size=-1, _buffer=simbuf)
    default_tracker = get_default_tracker()
    tracker = xt.Tracker(line=line, _buffer=simbuf,
                        track_kernel=default_tracker.track_kernel,
                        element_classes=default_tracker.element_classes)
    line_metadata = LineMetaData(_buffer=simbuf,
                                ele_offsets=tracker.ele_offsets_dev,
                                ele_typeids=tracker.ele_typeids_dev)

    sim_state = SimState(_buffer=simbuf, particles=particles._xobject, i_turn=0)
    sim_config.line_metadata = line_metadata
    sim_config.num_turns = num_turns
    sim_config.sim_state = sim_state
    sim_state.size = sim_state._size # store size of sim_state

    assert sim_config._offset == 0
    assert sim_config._fields[0].offset == 0
    assert sim_config._fields[0].name == 'buffer_size'

    sim_config.buffer_size = simbuf.capacity

    # Write sim buffer to file
    with open('sim.bin', 'wb') as fid:
        fid.write(simbuf.buffer.tobytes())

    return sim_config
import numpy as np

import xboinc as xb

# Read output
filename = 'out'
sim_state = xb.read_output_file(filename)

# Look at particles state
particles = sim_state.particles

assert np.allclose(particles.s, 2.665888e+04*1000, rtol=1e-6, atol=0)
assert np.all(particles.at_turn == 1000)
assert sim_state.i_turn == 1000

print('All checks passed!')

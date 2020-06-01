import matplotlib.pyplot as plt
import numpy as np

fig, ax = plt.subplots()

# numpy.arange() is an abbrev. of "array range": arguments goes (1) start [included], (2) end [excluded], (3) step.
t = np.arange(0.0, 4.0, 0.02)
y = 2 * np.sin(2 * np.pi * t) * np.exp(-t * 0.25)

# SET axes properties: part 2
ax.set_xticks(np.arange(0, 4, 1))
"""EQUIVALENT
from matplotlib.ticker import MultipleLocator
ax.xaxis.set_major_locator(MultipleLocator(1))
ax.set_xlim(0, 4)
"""
ax.set_ylim(-2, 2)
ax.set_yticks([-2, -1, 0, 1, 2])
ax.set_yticklabels(['-two', '-one', 'zero', '+one', '+two'])

ax.set(title = 'Sample Plot', xlabel = 'width', ylabel = 'height')
ax.plot(t, y)

# LAYOUT grid with additional options.
ax.grid(True, linestyle = '--', linewidth = 0.5, color = (0.2, 0.5, 0.5))

plt.show()
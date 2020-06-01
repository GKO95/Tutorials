from matplotlib.ticker import MultipleLocator, FormatStrFormatter, AutoMinorLocator
import matplotlib.pyplot as plt
import numpy as np

fig, ax = plt.subplots()

t = np.arange(0.0, 4.0, 0.02)
y = 2 * np.sin(2 * np.pi * t) * np.exp(-t * 0.25)

ax.set(title = 'Sample Plot', xlabel = 'width', ylabel = 'height', xlim = (0, 4), ylim = (-2, 2))

# MARK major ticks multiple of 0.5 (e.g. 0.5, 1.0, 1.5, 2.0, etc)
ax.xaxis.set_major_locator(MultipleLocator(0.5))
# MARK four minor ticks between the x-axis major ticks.
ax.xaxis.set_minor_locator(AutoMinorLocator(4))

# MARK major ticks multiple of 0.5 (e.g. 1, 2, 3 etc)
ax.yaxis.set_major_locator(MultipleLocator(1))
ax.yaxis.set_major_formatter(FormatStrFormatter('%.1f'))
# MARK two minor ticks between the y-axis major ticks.
ax.yaxis.set_minor_locator(AutoMinorLocator(2))
ax.yaxis.set_minor_formatter(FormatStrFormatter('%.2f'))

# LAYOUT grid for major and minor ticks respectively.
ax.grid(True, which = 'major', linestyle = '-', color = 'r')
ax.grid(True, which = 'minor', linestyle = 'dotted')

ax.plot(t, y)
plt.show()
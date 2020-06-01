# The module pyplot allows easier manipulation of matplotlib, suitable for programming purpose.
import matplotlib.pyplot as plt

# CREATE figure w/ window title (optional).
fig = plt.figure("Window Title")
"""
NOTICE: API matplotlib.figure.Figure() allows equivalent to matplotlib.pyplot.figure() but with more advanced customization.
"""

# INSTALL gridspec (consider as layout) on the figure for axes.
gs = fig.add_gridspec(nrows = 2, ncols = 2)

# GENERATE axes (a space where actually plotting occurs) respect to gridspec of the figure.
ax1 = fig.add_subplot(gs[0, 0])
ax2 = fig.add_subplot(gs[0, 1])
ax3 = fig.add_subplot(gs[1, 0:2])

plt.show()
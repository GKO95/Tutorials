import matplotlib.pyplot as plt

fig = plt.figure()

# GENERATE axes (a space where actually plotting occurs) in the figure, automatically setting 2x2 grid.
ax1 = fig.add_subplot(2, 2, 1)
ax2 = fig.add_subplot(2, 2, 2)

# ROWSPAN/COLSPAN can be done by assuming the layout is rather 2x1 grid.
ax3 = fig.add_subplot(2, 1, 2)
''' INVALID: only integer is allowed; rowspan and colspan are fixed to 1.
ax3 = fig.add_subplot(2, 2, 3:4)
'''

plt.show()
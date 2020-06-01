import matplotlib.pyplot as plt

fig, ax = plt.subplots()

# PLOT line chart; arguments starts with x-axis then y-axis.
x = [1,4,5]; y = [1,2,5]
ax.plot(x, y)

# SET axes properties and LAYOUT grid.
ax.set(title = 'Sample Plot', xlabel = 'width', ylabel = 'height', xlim = (0, 6), ylim = (0, 6))
"""EQUIVALENT:
ax.set_title('Sample Plot')
ax.set_xlabel('width')
ax.set_ylabel('height')
ax.set_xlim(0, 6)
ax.set_ylim(0, 6)
"""
ax.grid(True)

plt.show()
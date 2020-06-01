import matplotlib.pyplot as plt
import numpy as np

fig, ax = plt.subplots()

# VISUALIZE the numpy using matplotlib; vmin and vmax is used to set the minimum and maximum value.
mat = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
ax.imshow(mat, vmin = 0, vmax = 10)

plt.show()
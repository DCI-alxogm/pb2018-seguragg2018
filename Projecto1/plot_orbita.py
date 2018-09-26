import sys
import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt(sys.argv[1]).T
plt.plot(data[0],data[1])
plt.xlabel('x')

plt.ylabel('y')
plt.show()

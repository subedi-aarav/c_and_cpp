import matplotlib.pyplot as plt
import numpy as np 

x = np.array([35, 25, 25, 25,50])
mylabels = ["Apple", "Bananas", "Cherries", "Dates", "Bites"]
myexplode = [0.1, 0.1, 0.1, 0.1, 0.1]
mycolors = ["black", "hotpink", "b", "#4CAF50", "blue"]
plt.pie(x, labels=mylabels, colors=mycolors, startangle=90, explode=myexplode, shadow= True)
plt.legend(title = "Five Fruits:")
plt.show()
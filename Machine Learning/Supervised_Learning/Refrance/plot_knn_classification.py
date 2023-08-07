import mglearn
import matplotlib.pyplot as plt

#generate dataset
X, y = mglearn.datasets.make_forge()
#plot datset
mglearn.plots.plot_knn_classification(n_neighbors=4)
plt.xlabel("First feature")
plt.ylabel("Second feature")
print("X.shape: {}".format(X.shape))
plt.show()
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
iris_dataset = load_iris()
X_train,X_test,y_train,y_test = train_test_split(iris_dataset['data'], iris_dataset['target'], random_state=0)

#creat dataframe from data in X_train
#lable the columns using the string in iris_dataset.feature_names
iris_dataframe = pd.DataFrame(X_train, columns=iris_dataset['feature_names'])
#create a scatter matrix from the dataframe, color by y_train
pd.plotting.scatter_matrix(iris_dataframe, c=y_train, figsize=(15, 15), marker='o', hist_kwds={'bins': 20}, s=60, alpha=.8)
# Display the scatter matrix plot
plt.show() 

#Building your first Model:k-Nearest Neighbors
knn = KNeighborsClassifier(n_neighbors=1)
knn.fit(X_train, y_train)

#Evaluating the Model
y_pred = knn.predict(X_test)
#print("Test set prediction:\n{}".format(y_pred))
print("Test set score: {:.2f}".format(np.mean(y_pred == y_test)))
print("We expect our model to be correct 97'%' of the time for the new irises")

#Take input from user and Making Prediction
X_new = np.array([[5, 2.9, 1, 0.2]])
prediction = knn.predict(X_new)
print("\nPrediction: {}".format(prediction))
print("predictied target name: {}".format(iris_dataset['target_names'][prediction]))
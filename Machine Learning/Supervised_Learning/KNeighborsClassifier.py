import mglearn
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
X, y = mglearn.datasets.make_forge()

X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=0)
clf = KNeighborsClassifier(n_neighbors=3)

clf.fit(X_train, y_train)

#Actual test data:-
print("Test set : {}".format(y_test))
#To make prediction on the test data, we call predict method. 
print("Test set prediction : {}".format(clf.predict(X_test)))

#Evaluate our model
print("Test set accuracy: {:.2f}".format(clf.score(X_test, y_test)))

#result
print("We see that our model is about 86%, accurate.")
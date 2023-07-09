# the power of lambda is better shown when you use as an anonymous function inside another function

def myfunction(n):
    return lambda a : a * n  #argument of limbda is a and argumebt of the function is n

mydouble = myfunction(2)  #argument of function passed as 2
mytripple = myfunction(3)  #argument of function passed as 3

j = int(input("Enter a number " ))
print("Double of", j ,"is", mydouble(j)) #argument of limbda is j 
print("tripple of",j,"is",mytripple(j))  #argument of limbda is j

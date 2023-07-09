def sum_of_natural_number(n):
    if n == 0:
        return 0
    else:
        return n + sum_of_natural_number(n-1)
    
n = int(input("Enter a positive integer: "))
result = sum_of_natural_number(n)
print("The sum of the first",n,"natural number is", result)
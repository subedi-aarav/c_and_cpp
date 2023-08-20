a = int(input("Enter a number: "))
b = int(input("Enter a number: "))

def GCD(m, n):
    q = int(m / n)
    r = m - n * q
    return r

while GCD(a,b) != 0:
    tempR = GCD(a,b)
    a, b = b, tempR

print("Greatest Common Divisor: ", tempR)
# generate a list of prime numbers from 0 to 99 using a function called prime(x).

def prime(x):
    count = 0 
    for i in range(2,x+1):
        if x % i == 0:
            count += 1
    if count == 1:
        return True
    else:
        return False

prime_list = [x for x in range(100) if prime(x)]
print(prime_list)
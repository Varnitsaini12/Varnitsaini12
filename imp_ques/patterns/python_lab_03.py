# import math
# gc = math.gcd(60,48)
# print(gc)

def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))


print("The gcd of a and b is {}".format(gcd(a,b)))
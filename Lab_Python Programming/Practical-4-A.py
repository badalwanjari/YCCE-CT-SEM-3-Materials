#!/usr/bin/env python3

# -----Practical-4-a------
#a) Python Program to Find Factorial of Number

#def fact(n):
#	if n == 1:
#		return 1
#	else :
#		return n*fact(n-1)
	
def fact(n):
	x = 1
	for i in range (n, 0, -1):
		x = x * i
	return x

num = int(input("Enter a number: "))
print("Factorial of", num, "is", fact(num))
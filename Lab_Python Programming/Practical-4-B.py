# !/usr/bin/env python3

# ------Practical-4-b--------
#Python Program to Find Sum of Natural Numbers Using Recursion

def sum_of_natural_num(n):
	if n==1:
		return 1
	else :
		return n + sum_of_natural_num(n-1)

num = int(input("Enter a number: "))
print("The sum of first", num, "natural numbers is", sum_of_natural_num(num))

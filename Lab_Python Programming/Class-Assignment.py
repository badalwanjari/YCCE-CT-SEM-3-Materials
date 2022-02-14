#!/usr/bin/env python3

n=int(input("Enter row number: "))
for i in range(1,n+1):
	for j in range(1,i+1):
		print(j,end=" ")
	print()
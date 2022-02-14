#Python Program to Check Leap Year

year=int(input("Enter a year: "))

if year%400==0:	
	print(year, "is Leap year")
	
elif year%100!=0 and year%4==0:
	print(year, "is Leap year")
	
else:
	print(year, "is not Leap year")
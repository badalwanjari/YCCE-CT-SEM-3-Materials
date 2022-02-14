
#Python Program to Print numbers in word format in an Interval

words=["ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"]
n=int(input("Enter a number : "))
arr=[]
while n>0:	
	arr.append(n%10)
	n=n//10
print("\nThe given number represented in words format: ")
for num in range(len(arr)-1, -1, -1) :
	print (words[arr[num]] , end=" ")
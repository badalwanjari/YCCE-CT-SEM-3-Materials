import array

#declaring empty integer array
arr = array.array('i' , [])
n = int(input("Enter no. of element you want to append: "))

#appending element at end
for i in range(n):
    arr.append(int(input("Enter element : ")))

#printing Array before reversing
print("Initial Array =", arr)

#reversing and printing array
arr.reverse()
print("Reversed Array =", arr)
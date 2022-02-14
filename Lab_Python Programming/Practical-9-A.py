import array

#creating array of 5 integers
arr = array.array('i', [1, 2, 3, 4, 5])

#Displaying array
print("Array =", arr)

#accessing element of array through indexes
print("Individual elements: ", end=' ')
for i in range (len(arr)):
    print(arr[i], end=' ')
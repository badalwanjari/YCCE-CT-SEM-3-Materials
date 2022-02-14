import array

#creating array of 5 integers
arr = array.array('i', [1, 2, 3, 4, 5])

#Displaying array
print("Initial Array =", arr)

#appending element
ele = int(input("Enter element to insert: "))
idx = int(input("Enter index : "))
arr.insert(idx-1, ele)

#Displaying array
print("Array after inserting new element =", arr)

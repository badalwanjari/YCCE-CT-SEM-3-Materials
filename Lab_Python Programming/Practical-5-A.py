list = []
n = int(input("Enter number of elements : "))
print("Enter elements of list : ")
for i in range (n):
    list.append(int(input()))

print("List =", list)
print("Smallest Number in list = " ,min(list))
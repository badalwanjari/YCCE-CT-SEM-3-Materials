list = []
n = int(input("Enter number of elements : "))
print("Enter elements of list : ")
for i in range (n):
    list.append(input())

print("List before : ", list)
list = set(list)
print("List after : ", list)
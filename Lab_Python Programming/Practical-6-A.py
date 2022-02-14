list = []
n = int(input("Enter number of elements : "))
print("Enter elements of list : ")
for i in range (n):
    list.append(str(input()))

count = 0
for i in list:
    if len(i)>2 and i[0]==i[-1]:
        count = count + 1

print("Number meeting both conditions =" ,count)
# ['abc', 'xyz', 'aba', '1221'] 
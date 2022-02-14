n = int(input('Enter Number of element : '))
s1 = set([])
for i in range (n):
    s1.add(int(input("Enter element: ")))
print("Set=",s1)
#clearing set
s1.clear()
print("cleared set =", s1);
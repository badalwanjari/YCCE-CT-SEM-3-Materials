dict = []
n = int(input("Enter number of key-value pair which you have to add: "))
for i in range(n):
    key = str(input("Enter key (String) : "))
    value = float(input("Enter value (float) : "))
    dict.insert(i, (key, value));

print("Input : ", dict)
lst = sorted(dict, key=lambda x:float(x[1]),reverse = True);
print("Output :" , lst);
#[('item1', '12.20'), ('item2', '15.10'), ('item3', '24.5')] 
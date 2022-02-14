import pandas as pd

data = {"Roll No":[101, 102, 103, 104, 105], "Name":["Rahul", "Rajesh", "Raju", "Radha", "Raj"]}

Marks = [100, 99, 97, 67, 87]

df = pd.DataFrame(data)

df.insert(2, "Marks", Marks)

print(df)
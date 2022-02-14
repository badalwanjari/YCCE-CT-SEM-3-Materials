#!/usr/bin/env python3

print("Welcome, Please place your order:\n")
print("a. Vanilla Ice-cream - Rs. 100")
print("b. Orange Flavoured Ice-cream - Rs. 50")
print("c. Mango Flavoured Ice-cream - Rs. 50")
print("d. Chocolate Flavoured Ice-cream - Rs. 120")
print("e. Protein Ice-cream - Rs. 150")
print("f. Cup-cake - Rs. 100\n")
choice=input("Enter your choice: ")
print("\n")
if choice=='a':
	print("You have ordered Vanilla Ice-cream")
	price=100
elif choice=='b':
	print("You have ordered Orange Flavoured Ice-cream")
	price=50
elif choice=='c':
	print("You have ordered Mango Flavoured Ice-cream")
	prince=50
elif choice=='d':
	print("You have ordered Chocolate Flavoured Ice-cream")
	price=120
elif choice=='e':
	print("You have ordered Protein Ice-cream")
	price=150
elif choice=='f':
	print("You have ordered Cup-cake")
	price=100
else:
	print("Please Enter Valid choice!!!")
	price=0
	
print("Your billing amount is Rs.", price)
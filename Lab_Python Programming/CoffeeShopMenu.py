def menu():
	print("\nHere's the menu card for you -")
	print("1. Espresso - Rs. 250")
	print("2. Latte - Rs. 300")
	print("3. Iced Coffee - Rs. 350")
	print("4. Bagels - Rs. 120")
	print("5. Donuts - Rs. 150")
	print("6. Breakfast Sandwich - Rs. 100\n")
	
def ask(h):
	if h=='y':
		menu()
		choice=int(input("Please press the index of your food/drink: "))
		if choice==1:
			return 250
		elif choice==2:
			return 300
		elif choice==3:
			return 350
		elif choice==4:
			return 120
		elif choice==2:
			return 100
		else:
			return 0
	elif h=='n':
		print("Thank you!!!")
		return 0
	else:
		print("Sorry sir/madam, you have entered incorrect option. Please try again")
		return 0

print("Welcome to XYZ coffee shop sir/madam,")
amount=0.0
firstTime=1
a='y'
while a!='n':
	if firstTime==1:
		a=input("Want to order something? if yes press 'y' or else 'n': ")
		firstTime=0
	else:
		a=input("\nWant to order more? if yes press 'y' or else 'n': ")
	curr=ask(a)
	amount=amount+curr
if amount>0.0:
	print("\nYour purchase- Rs.", amount,"\nTip amount- Rs.",amount*0.05,"\n12% GST on food- Rs.", 0.12*amount)
	print("----------------------------")
	print("= Rs. ",amount*(1.17))
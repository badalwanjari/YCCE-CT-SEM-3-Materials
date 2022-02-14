class Account{
	String AcName;
	double Amount;
	int AccNumber;
	public Account(int accNumber, String HoldersName, double amount){     //constructor 
		AcName= HoldersName;
		AccNumber=accNumber;
		Amount= amount;
	}
	public void Withdraw(double withdrawAmount){					//method
		if(Amount - withdrawAmount < 0){
			System.out.println("Rs." + withdrawAmount + " cannot be withdrawn from your account.\n");
		}
		else{
			Amount=Amount-withdrawAmount;
			System.out.println("Rs." + withdrawAmount + " is debited from your account.\n");
		}
	}
	public void Deposit(double depoAmount){
		if(depoAmount>0){							//method
			Amount=Amount+depoAmount;
			System.out.println("Rs." + depoAmount+ " is credited to your account.\n");
		}else{
			System.out.println("Deposition Failed!!!!");
		}
	}

	public void ShowDetail(){
		System.out.println("Account Number - "+ AccNumber);
		System.out.println("Account Holder's Name - " + AcName);
		System.out.println("Current Account Balance - Rs. "+ Amount + "\n");
	}
}

public class Practical1{
	public static void main(String[] args) {
		Account C1= new Account(45787893, "Rajesh Yelsattiwar", 45000.0);
		C1.ShowDetail();
		C1.Deposit(5000);
		C1.ShowDetail();
		C1.Withdraw(5000);
		C1.ShowDetail();
	}
}
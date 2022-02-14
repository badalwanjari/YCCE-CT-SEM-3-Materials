class Employee{	
	String Name;
	int EmpNo;
	String Department;

	//Default constructor
	public Employee(){} 

	//Parameterized constructor
	public Employee(String Name_, int EmpNo_, String Department_){   
		Name = Name_;
		EmpNo = EmpNo_;
		Department = Department_;
	}

	//method
	void Display(){    
		System.out.println("Employee Name - "+ this.Name);
		System.out.println("Employee Number - "+ this.EmpNo);
		System.out.println("Department - "+ this.Department);
		System.out.println("");
	}
}

class Practical2 {
	public static void main(String args []) {
		Employee Employee1 = new Employee();
		Employee Employee2 = new Employee("Gajanan Patil", 4004, "Accounts");
		Employee1.Display();
		Employee2.Display();
	}
}

class Member{
    String Name;
    int Age;
    String PhoneNo;
    String Address;
    Double Salary;

    //overriden method
    void printInfo() {
    }
}

class Employees extends Member {
    String Specialization;

    //constructor
    public Employees(String name, int age, String address, String PhoneNum, double sal, String specilizedIn) {
        this.Name = name;
        this.Age = age;
        this.Address = address;
        this.PhoneNo = PhoneNum;
        this.Salary = sal;
        this.Specialization = specilizedIn;
    }

    //overriding method
    @Override
    void printInfo() {
        System.out.println("Name : " + this.Name);
        System.out.println("Age : " + this.Age);
        System.out.println("Address : " + this.Address);
        System.out.println("Phone No. : " + this.PhoneNo);
        System.out.println("Post : Employee");
        System.out.println("Specialization : " + this.Specialization);
        System.out.println("Salary : " + "Rs. " + this.Salary + "\n");
    }
}

class Manager extends Member {
    String Department;

    //constructor
    public Manager(String name, int age, String address, String PhoneNum, double sal, String department) {
        this.Name = name;
        this.Age = age;
        this.Address = address;
        this.PhoneNo = PhoneNum;
        this.Salary = sal;
        this.Department = department;
    }

     //overriding method
     @Override
     void printInfo() {
        System.out.println("Name : " + this.Name);
        System.out.println("Age : " + this.Age);
        System.out.println("Address : " + this.Address);
        System.out.println("Phone No. : " + this.PhoneNo);
        System.out.println("Post : Manager");
        System.out.println("Department : " + this.Department);
        System.out.println("Salary : " + "Rs. " + this.Salary + "\n");
    }
}

public class Practical4 {
    public static void main(String[] args) {
        Employees employee1 = new Employees("Dhiraj Deshmukh", 23, "Sakkardhara, Nagpur - 441100", "+919848684682", 30000, "Accounts");
        Manager manager1 = new Manager("Rajkumar Singh", 26, "Hingna, Nagpur - 441104", "+917856846820", 60000, "Sales");

        manager1.printInfo();
        employee1.printInfo();
    }
}
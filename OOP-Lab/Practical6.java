class Person{
    String name;
    String address;
    void eat(){
        System.out.println("Eating....");
    }
    void walk(){
        System.out.println("Walking....");
    }
    void talk(){
        System.out.println("Talking");
    }
}
class Student extends Person{
    String college_name;
    public Student(String nm, String ad, String clgNm){
        this.name = nm;
        this.address = ad;
        this.college_name = clgNm;
    }

    void study(String sub){
        System.out.println("Student is studying "+sub);
    }
}
class Customer extends Person{
    int customerID;
    public Customer(String nm, String ad, int custID){
        this.name = nm;
        this.address = ad;
        this.customerID = custID;
    }
    void purchase(String product){
        System.out.println("Customer is purchasing "+product);
    }
}

public class Practical6 {
    public static void main(String [] args) {
        Person P1 = new Person();
        P1.eat();
        P1.walk();
        P1.talk();

        Student Stud = new Student("Rajesh Sharma", "Mumbai - 400001", "VJIT");
        Stud.study("Physiscs");
        Stud.eat();

        Customer Cust = new Customer("Madhvrao Chavan", "Pune - 400220", 200020);
        Cust.purchase("Sugar");
        Cust.eat();
        
    }
}
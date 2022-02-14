import java.util.*;
class Practical8 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
              
        try {
            System.out.print("Enter value of a: ");
            int a = sc.nextInt();
            System.out.print("Enter value of b: ");
            int b = sc.nextInt();
            System.out.print("Enter value of c: ");
            int c = sc.nextInt();
            System.out.println("a /(b - c) = " + a / (b - c));
        }

        //Arithmatic exception handler
        catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception Handler");
            System.out.println(e);
        }
        //Default exception handler
        catch (Exception e) {
            System.out.println("Default Exception Handler");
            System.out.println(e);
        }
        sc.close();
    }
}
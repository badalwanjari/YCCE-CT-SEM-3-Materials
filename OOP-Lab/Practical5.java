abstract class Professor{
    //abstract method
    abstract void perform_hr(int week);
}

class Assistant extends Professor{
    //implementaion of abstract method
    void perform_hr(int week){
        System.out.println("Total teaching hours of Assistant: "+ 10*week);
        System.out.println("Total research hours of Assistant: "+ 3*week);
        System.out.println();
    }
}

class Associate extends Professor{
    //implementaion of abstract method
    void perform_hr(int week){
        System.out.println("Total teaching hours of Associate: "+ 8*week);
        System.out.println("Total research hours of Associate: "+ 5*week);
        System.out.println();
    }
}
class Practical5{
    public static void main(String [] args){
       Assistant assistant1 = new Assistant();
       Associate associate1 = new Associate();
       assistant1.perform_hr(4);
       associate1.perform_hr(4);
    }
}
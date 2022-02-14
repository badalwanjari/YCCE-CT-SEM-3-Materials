class AddNumbers{
    public <T extends Number> Number add(T a, T b) {
        if (a instanceof Double){
            return a.doubleValue() + b.doubleValue();
        }
        return a.intValue() + b.intValue();
    }
}

public class Practical11{
    public static void main(String [] args){
        AddNumbers n = new AddNumbers();
        System.out.println(n.add(44, 51));
        System.out.println(n.add(15.11, 35.67));
    }
}
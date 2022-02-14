import java.util.*;
class Practical7A{
    public static void main(String [] args) {
        HashMap<Integer, String> hshmap = new HashMap<Integer, String>();
        hshmap.put(101, "Anushka Sinha");
        hshmap.put(102, "Roshni Tighare");
        hshmap.put(103, "Raju Sharma");
        hshmap.put(104, "Hardik Tighare");
        hshmap.put(105, "Rohit Nakhate");

        ArrayList<String> StudentName = new ArrayList<String>();
        TreeSet<Integer> RollNo = new TreeSet<Integer>();

        for(Map.Entry<Integer, String> mapElement : hshmap.entrySet()){
            StudentName.add((String)mapElement.getValue());
            RollNo.add((int)(mapElement.getKey()));
        }

        System.out.println("\nDisplaying HashMap: ");
        for(Map.Entry<Integer, String> mapElement : hshmap.entrySet()){
            System.out.println("Roll No. "+ mapElement.getKey() + "\t" + "Name - "+ mapElement.getValue());
        }

        System.out.println("\nDisplaying ArrayList: ");
        Iterator<String> itrAr = StudentName.iterator();
        while(itrAr.hasNext()){
            System.out.println(itrAr.next());
        }

        System.out.println("\nDisplaying TreeSet: ");
        Iterator<Integer> itrTs = RollNo.iterator();
        while(itrTs.hasNext()){
            System.out.println(itrTs.next());
        }
    }
}
import java.util.HashMap;
import java.util.*;
import java.util.ArrayList;
public class Practical7B {
    public static void main(String [] args){
        HashMap<Integer , int []> hshmap = new HashMap<Integer, int []>();
        ArrayList<Integer> totalMark = new ArrayList<Integer>();

        int roll_no_1 = 101;
        int [] marks_1 = {99, 78, 66, 89, 85};
        hshmap.put(roll_no_1, marks_1);

        int roll_no_2 = 102;
        int [] marks_2 = {89, 78, 76, 80, 71};
        hshmap.put(roll_no_2, marks_2);

        int roll_no_3 = 103;
        int [] marks_3 = {99, 85, 96, 89, 95};
        hshmap.put(roll_no_3, marks_3);


        for(Map.Entry<Integer , int []> mapElement: hshmap.entrySet()){
            int [] marks = (int[])mapElement.getValue();
            int temp=0;
            for(int i=0;i<5;i++){
                temp += marks[i];
            }
            totalMark.add(temp);
        }

        System.err.println("Displaying HashMap : ");
        for(Map.Entry<Integer , int []> mpElement: hshmap.entrySet()){
            System.out.println("Roll No." + mpElement.getKey());
            int [] temp = (int [])mpElement.getValue();
            for(int i=0;i<5;i++){
                System.out.println("Mark in subject-" + (i+1) + " = " + temp[i]);
            }
            System.out.println();
        }

        System.out.println("Displaying ArrayList containing Total Marks");
        Iterator<Integer> itr = totalMark.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
    }
}

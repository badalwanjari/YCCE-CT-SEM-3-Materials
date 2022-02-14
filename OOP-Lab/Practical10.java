import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class Practical10 {
    public static void main(String[] args) {
        try {
            //Opening files
            File file = new File("numbers.txt");
            FileWriter fwOddFile = new FileWriter("odd.txt", true);
            FileWriter fwEvenFile = new FileWriter("even.txt", true);

            //Performing read-write operation on files
            Scanner fs = new Scanner(file);            
            while (fs.hasNextLine()) {
                int n = fs.nextInt();
                if (n % 2 == 1) {
                    fwOddFile.write(n + "\n");
                }
                else{
                    fwEvenFile.write(n + "\n");
                }
            }

            System.out.println("All operations are successful!!!");

            //closing files
            fs.close();
            fwOddFile.close();
            fwEvenFile.close();
        } catch (IOException e) {
            System.out.println("Exception : " + e);
        }
    }
}

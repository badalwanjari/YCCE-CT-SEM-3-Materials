class MyThread1 extends Thread {
    public void run() {
        int count = 1;
        int i=1;
        while (count <= 10) {
            try {
                sleep(500);
                if(i%2==1){
                    System.out.println("ODD -  " +  i);
                    count++;
                }
                i++;
            } 
            catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}
class MyThread2 extends Thread {
    public void run() {
        int count = 1;
        int i=1;
        while (count <= 10) {
            try {
                sleep(500);
                if(i%2==0){
                    System.out.println("EVEN - " +  i);
                    count++;
                }
                i++;
            } 
            catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class Practical9 {
    public static void main(String[] args) {
        MyThread1 m1 = new MyThread1();
        MyThread2 m2 = new MyThread2();
        System.out.println("Priting first 10 odd and even natural numbers simultanously : ");
        m1.start();
        m2.start();
    }
}

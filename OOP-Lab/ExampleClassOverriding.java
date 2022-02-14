import java.awt.*;

public class ExampleClassOverriding {
    public static void main(String [] args) {
       Frame f1 = new Frame("THis is sample frame");
       Button b1 = new Button("click Me");
       b1.setBounds(210, 360, 80, 40);
       b1.setBackground(Color.green);
       f1.setBackground(Color.orange);
       f1.add(b1);
       f1.setSize(500, 400);
       Label l1 = new Label();
       l1.setAlignment(Label.CENTER);
       l1.setSize(100, 20);
       l1.setVisible(true);
       f1.add(l1);
       f1.setLayout(null);
       f1.setForeground(Color.PINK);
       f1.setVisible(true);
       
    }
}

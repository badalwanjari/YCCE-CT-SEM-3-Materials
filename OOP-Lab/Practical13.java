import java.awt.*;
import java.awt.event.*;

public class Practical13 implements ActionListener {
    Frame f1;
    Label nameLabel, rgNo, info, infoRn;
    TextField nameTF, rgTF;
    Button btn;
    public Practical13() {
        f1 = new Frame("Practical-13");
        f1.setSize(600, 400);

        nameLabel = new Label("Enter Your Name : ");
        nameLabel.setBounds(50, 50, 100, 30);
        nameTF = new TextField();
        nameTF.setBounds(200, 50, 200, 30);

        rgNo = new Label("Enter Your Reg No : ");
        rgNo.setBounds(50, 100, 100, 30);
        rgTF = new TextField();
        rgTF.setBounds(200, 100, 200, 30);

        btn = new Button("Submit");
        btn.setBounds(270, 200, 60, 30);

        info = new Label();
        info.setAlignment(Label.CENTER);
        info.setBounds(125, 300, 300, 30);

        infoRn = new Label();
        infoRn.setAlignment(Label.CENTER);
        infoRn.setBounds(90, 350, 400, 30);

        btn.addActionListener(this);

        f1.add(info);
        f1.add(infoRn);
        f1.add(btn);
        f1.add(rgNo);
        f1.add(rgTF);
        f1.add(nameLabel);
        f1.add(nameTF);
        f1.setResizable(false);
        f1.setLayout(null);
        f1.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
            info.setText("Your Name Is " + nameTF.getText());
            infoRn.setText("Your Registration Number is " + rgTF.getText());
    }
    public static void main(String[] args) {
        new Practical13();
    }
}

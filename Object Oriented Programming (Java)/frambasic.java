// import javax.swing.*;
// import java.awt.event.*;

// public class frambasic {
//     public static void StudentInfo() {
//         JFrame f = new JFrame("Students detail form");
//         JLabel l1, l2, l3, l4, l5, l6, l7;
//         f.setSize(700, 600);
//         JTextField t1, t2, t3;
//         JTextArea t4;
//         JComboBox j1, j2;
//         JButton b1;
//         JCheckBox checkBox1 = new JCheckBox("Gaming");
//         checkBox1.setBounds(100, 320, 80, 50);
//         JCheckBox checkBox2 = new JCheckBox("Reading");
//         checkBox2.setBounds(200, 320, 80, 50);
//         JCheckBox checkBox3 = new JCheckBox("Gym");
//         checkBox3.setBounds(300, 320, 80, 50);
//         JCheckBox checkBox4 = new JCheckBox("Programming");
//         checkBox4.setBounds(400, 320, 120, 50);
//         l1 = new JLabel("Student Name:");
//         l1.setBounds(50, 50, 100, 30);
//         l2 = new JLabel("Roll number:");
//         l2.setBounds(50, 90, 100, 30);
//         l3 = new JLabel("Mobile number:");
//         l3.setBounds(50, 130, 100, 30);
//         l4 = new JLabel("Address:");
//         l4.setBounds(50, 170, 150, 30);
//         l5 = new JLabel("Gender:");
//         l5.setBounds(50, 250, 100, 30);
//         l6 = new JLabel("BRANCH:");
//         l6.setBounds(50, 290, 100, 30);
//         l7 = new JLabel("Hobbies:");
//         l7.setBounds(50, 330, 150, 30);
//         t1 = new JTextField();
//         t1.setBounds(150, 50, 150, 30);
//         t2 = new JTextField();
//         t2.setBounds(150, 90, 130, 30);
//         t3 = new JTextField();
//         t3.setBounds(150, 130, 130, 30);
//         t4 = new JTextArea();
//         t4.setBounds(150, 170, 250, 60);
//         String s1[] = { " ", "Male", "Female", "LGBT", "OTHERS" };
//         String s2[] = { " ", "CSE", "EE", "CT", "ME", "ETC", "CE", "" };
//         j1 = new JComboBox(s1);
//         j1.setBounds(120, 250, 100, 30);
//         j2 = new JComboBox(s2);
//         j2.setBounds(120, 290, 100, 30);
//         b1 = new JButton("SUBMIT");
//         b1.setBounds(150, 400, 110, 30);
//         b1.addActionListener(new ActionListener() {
//             public void actionPerformed(ActionEvent e) {
//                 f.dispose();
//             }
//         });
//         f.addWindowListener(new WindowAdapter() {
//             public void windowClosing(WindowEvent e) {
//                 System.exit(0);
//             }
//         });
//         f.add(l1);
//         f.add(t1);
//         f.add(l2);
//         f.add(t2);
//         f.add(l3);
//         f.add(t3);
//         f.add(l4);
//         f.add(t4);
//         f.add(l5);
//         f.add(j1);
//         f.add(l6);
//         f.add(j2);
//         f.add(b1);
//         f.add(l7);
//         f.add(checkBox1);
//         f.add(checkBox2);
//         f.add(checkBox3);
//         f.add(checkBox4);
//         f.setLayout(null);
//         f.setVisible(true);
//     }

//     public static void main(String args[]) {
//         StudentInfo();
//     }
// }
// // HTML CODE:
// // <html>
// // <body>
// // <applet code = "AppletDemo.class" height=300
// // width=300></applet>
// // </applet>
// // </body>
// // </html>
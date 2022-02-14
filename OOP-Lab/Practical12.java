import java.awt.*;
public class Practical12{
    public static void main(String [] args){

        Frame f1 = new Frame("Registration Form");
        f1.setBounds(new Rectangle(800, 700));

        Label title = new Label("Registration Form");
        title.setAlignment(Label.CENTER);
        title.setBounds(260, 50, 280, 30);

        Label nameLable = new Label("Enter Your Name : ");
        nameLable.setBounds(150, 100, 240, 30);
        TextField nameTextField = new TextField();
        nameTextField.setBounds(440, 100, 240, 30);

        Label address = new Label("Enter Your Address");
        address.setBounds(150, 150, 240, 30);
        TextArea txtArea = new TextArea();
        txtArea.setBounds(440, 150, 240, 100);

        Label rlLable = new Label("Enter Your Roll No. : ");
        rlLable.setBounds(150, 300, 240, 30);
        TextField rlTextField = new TextField();
        rlTextField.setBounds(440, 300, 240, 30);

        Label mobNo = new Label("Enter Your Mobile No. : ");
        mobNo.setBounds(150, 350, 240, 30);
        TextField mobNoTextField = new TextField();
        mobNoTextField.setBounds(440, 350, 240, 30);

        Label genderLable = new Label("Gender : ");
        genderLable.setBounds(150, 400, 70, 30);
        CheckboxGroup chBoxGroup = new CheckboxGroup();
        Checkbox male = new Checkbox("Male", chBoxGroup, false);
        male.setBounds(280, 400, 50, 30);
        Checkbox female = new Checkbox("Female", chBoxGroup, false);
        female.setBounds(350, 400, 70, 30);


        Label hobbyLabel = new Label("Select Your Hobies : ");
        hobbyLabel.setBounds(150, 450, 180, 30);

        Checkbox cooking = new Checkbox("Cooking");
        Checkbox reading = new Checkbox("Reading");
        Checkbox drawing = new Checkbox("Drawing");
        Checkbox playing = new Checkbox("Playing");
        Checkbox music = new Checkbox("Music");

        cooking.setBounds(300, 450, 60, 30);
        reading.setBounds(400, 450, 60, 30);
        playing.setBounds(300, 500, 60, 30);
        music.setBounds(400, 500, 60, 30);
        drawing.setBounds(500, 450, 60, 30);

        Button btn = new Button("Submit Information!!!");
        btn.setBounds(300, 600, 200, 30);

        f1.add(btn);
        f1.add(reading);
        f1.add(cooking);
        f1.add(playing);
        f1.add(music);
        f1.add(drawing);
        f1.add(hobbyLabel);
        f1.add(male);
        f1.add(female);
        f1.add(genderLable);
        f1.add(mobNo);
        f1.add(mobNoTextField);
        f1.add(rlLable);
        f1.add(rlTextField);
        f1.add(nameTextField);
        f1.add(nameLable);
        f1.add(address);
        f1.add(txtArea);
        f1.add(title);
        f1.setResizable(false);
        f1.setLayout(null);
        f1.setVisible(true);
    }
}

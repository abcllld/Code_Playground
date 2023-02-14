import java.util.Scanner;
public class switch_statement {
    public static void main(String[] args) {
//        used to make a choice between number of alternatives
        Scanner stmt = new Scanner(System.in);
        System.out.println("Enter your age : ");
        int age = stmt.nextInt();

        switch (age) {
            case 18:
                System.out.println("Welcome to Budhapapan!");
                break;
            case 17:
                System.out.println("YOu are still not a Adult!");


                System.out.println("Age is just a Number!");
                break;
            default:
                System.out.println("Age is just a Number!");
                break;
        }
//the case can be integer, character or any string in Java

    }
}

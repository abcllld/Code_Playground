//write a program which ask the user to enter his/her name and greet with "Hello <name>, Have a good day!"
import java.util.Scanner;
public class set_02 {
public static void main(String[] args){
    Scanner question = new Scanner(System.in);
    System.out.println("Enter Your Name : ");
    String user = question.nextLine();
    System.out.println("Hello, "+user +" Have a Good Day!");
}
}

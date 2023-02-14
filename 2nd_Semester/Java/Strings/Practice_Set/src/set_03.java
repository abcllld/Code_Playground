/*write a program to fill in a letter template  which looks like below:
    letter = "Dear<|name|>, Thanks a lot"
    Replace <|name|> with a string (some name)
*/
import java.util.Scanner;
public class set_03 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Name : ");
        String name = sc.nextLine();
        String str = "Dear <name>, Thanks a lot";
        System.out.printf("Result : %s",str.replace("<name>",name));
    }
}

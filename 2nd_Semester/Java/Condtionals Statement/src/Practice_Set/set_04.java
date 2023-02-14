/*
write a program to find out the type of website from its url :
.com -- > Commercial websites
.org -- > Organizational Websites
.in -- > Indian Websites

 */
package Practice_Set;
import java.util.Scanner;
public class set_04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter website name : ");
        String web = sc.nextLine();
        if(web.endsWith(".com")){
            System.out.println("It's a Commercial Website");
        }
        else if(web.endsWith(".org")){
            System.out.println("It's a Organizational Website");
        }
        else{
            System.out.println("It's an Indian Website");
        }
    }
}

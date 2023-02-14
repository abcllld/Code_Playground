
import java.util.Scanner;
public class User_Input {
    public static void main(String[] args) {
        System.out.println("Let's Take User Input");
//        the user input can be taken by importing scanner class in Java
        Scanner sc = new Scanner(System.in); //here sc is the object(instance)
        System.out.println("Enter a number : ");
        int a = sc.nextInt();
//        In place of nextInt() we can use nextFloat and others data type also.
        System.out.println("Enter another number : ");
        int b = sc.nextInt();
        System.out.println("The sum of two no is : ");
        System.out.println(a+b);


        boolean b1 = sc.hasNextInt();
        //if we enter the integer no it will result in true otherwise False
        System.out.println(b1);

        String str = sc.next(); //this is used to raed a single word of the string
        System.out.println(str);
        //        to read multiple lines use nextLine methods:
        String str2 = sc.nextLine();
        System.out.println(str2);




    }
}

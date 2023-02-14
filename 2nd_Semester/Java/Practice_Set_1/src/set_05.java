//write a program to check whether a number entered by the user is Integer or not

import java.util.Scanner;
public class set_05 {
    public static void main(String[] args){
        System.out.println("Enter a Number : ");
        Scanner check = new Scanner(System.in);
        System.out.println(check.hasNextInt());
    }
}

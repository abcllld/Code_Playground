
//write a program to find whether a year is leap or not
package Practice_Set;
import java.util.Scanner;
public class set_03 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any Year : ");
        int year = sc.nextInt();
        if(year%4==0 && year%400==0 &&year%100==0){
            System.out.printf("%d is a Leap Year",year);
        }
        else{
            System.out.printf("%d is NOT a Leap Year",year);

        }
    }
}

/*
Calculate Income tax paid by an employee to the government as per the following stats.

    2.5L-5.0L -- > 5%
    5.0L-10.0L -- > 20%
    Above 10.0L -- > 30%
*/

package Practice_Set;
import java.util.Scanner;
public class set_02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your salary (in lakhs) : ");
        float salary = sc.nextFloat();
        if(salary>=2.5 && salary<=5.0){
            System.out.println("Pay 5% of Tax");
        }
        else if(salary>=5.0 && salary <=10.0){
            System.out.println("Pay 20% of Tax");
        }
        else{
            System.out.println("Pay 30% of Tax");
        }
    }
}





//write a program to convert kilometers to miles
//1km = 0.6217 miles
import java.util.Scanner;
public class set_04 {
    public static void main(String[] args){
    Scanner cov = new Scanner(System.in);
        System.out.println("Enter Distance in Kilometers : ");
        double ktm = cov.nextDouble();
        System.out.println("Distance in Miles  = "+(ktm*0.6217));

    }
}

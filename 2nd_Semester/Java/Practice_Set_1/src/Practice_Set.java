//write a program to find the sum of three no in java

import java.util.Scanner;
public class Practice_Set {
    public static void main(String[] args){
        Scanner sum = new Scanner(System.in);
        System.out.println("Entre Number_1: ");
        float num1 = sum.nextFloat();
        System.out.println("Entre Number_2: ");
        float num2 = sum.nextFloat();
        System.out.println("Entre Number_3: ");
        double num3 = sum.nextDouble();

        System.out.println("The sum of three no = "+(num1+num2+num3));

    }

}

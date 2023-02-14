
//write a program to calculate the percentage of a student . His marks form five subjects must be taken as user input.

import java.util.Scanner;
public class Exercise_1 {
    public static void main(String[] args){
Scanner marks=  new Scanner(System.in);
        System.out.println("Enter the subject 1 marks : ");
        int sub1 = marks.nextInt();
        System.out.println("Enter the subject 2 marks : ");
        int sub2 = marks.nextInt();
        System.out.println("Enter the subject 3 marks : ");
        int sub3 = marks.nextInt();
        System.out.println("Enter the subject 4 marks : ");
        int sub4 = marks.nextInt();
        System.out.println("Enter the subject 5 marks : ");
        int sub5 = marks.nextInt();

        float percentage = ((sub1+sub2+sub3+sub4+sub5)/5);
        System.out.println("Percentage of Student = ");
            System.out.print(percentage+"%");

    }
}

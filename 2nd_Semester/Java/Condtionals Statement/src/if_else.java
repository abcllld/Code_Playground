import java.util.Scanner;
public class if_else {
    public static void main(String[] args){
        Scanner vote = new Scanner(System.in);
        System.out.print("Enter Your Age : ");
//        int age = vote.nextInt();
//        if(age>=18){
//            System.out.println("Welcome to our voting campaign!");
//        }
//        else{
//            System.out.println("First Increase your Age ");
//        }

        int age = vote.nextInt();
        boolean cond = (age==18);
        if(cond){
            System.out.println("Welcome to our voting campaign!");
        }
        else{
            System.out.println("First Increase your Age ");
        }
//        this is true only for age having 18
    }
}

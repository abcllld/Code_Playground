package Practice_Set;
import java.util.Random;
import java.util.Scanner;
public class Rock_Paper_Scissor_Game {
    public static void main(String[] args) {
        /*
        1 - Rock
        2 - Paper
        3 - Scissor
         */
        System.out.println("\nUser Please Note This Before Playing : \n1 for ROCK\n2 for PAPER\n3 for SCISSOR");
        int i = 1;
        while(i<=3) {
            Scanner sc = new Scanner(System.in);
        System.out.print("User Turn : ");
        int user = sc.nextInt();

        Random rand = new Random();
        System.out.print("CPU Turn : ");
        int randomNumber = rand.nextInt() * 10;

            if (randomNumber == 1 && user == 2) {
                System.out.println("User Wins!");
            } else if (randomNumber == 2 && user == 1) {
                System.out.println("CPU Wins!");
            } else if (randomNumber == 1 && user == 3) {
                System.out.println("CPU Wins!");
            } else if (randomNumber == 3 && user == 1) {
                System.out.println("User Wins!");
            } else if (randomNumber == 2 && user == 3) {
                System.out.println("User Wins!");
            } else if (randomNumber == 3 && user == 2) {
                System.out.println("CPU Wins!");
            } else if (randomNumber == user) {
                System.out.println("The Game Ends in a Draw!");
            }
        }

    }
}


//write a program to encrypt a grade by adding 8 to it . Decrypt it by showing the correct grade

public class Practice_Set_02 {
    public static void main(String[] args) {
        char grade = 'D';
//        encryption:
//        grade = grade + 8; --> wrong way
        grade = (char)(grade + 8);
        System.out.println(grade); //L

//        decryption:
        grade = (char)(grade-8);
        System.out.println(grade); //D


    }
}

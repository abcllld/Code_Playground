
import java.sql.SQLOutput;
import java.util.Scanner;
public class String_Methods {
    public static void main(String[] args) {
//        Basically there are two make a string:
//        1. String a = "Rahul";
//        2.String s = new String("Rahul");


// Methods :
// 1. length():

//        String name = "Rahul";
//        int len = name.length();
//        System.out.println(len); // 5
//        System.out.printf("Length = %d",len);

//2. toLowerCase:
//                String name = "Rahul";
//                String lower = name.toLowerCase();
//                System.out.printf("Result = %s",lower);

//3.toUpperCase:
//        String name = "Rahul";
//        String up = name.toUpperCase();
//        System.out.printf("Result = %s",up);

//4.trim():
//        String name = "          Rahul            ";
//        String tr = name.trim();
//        System.out.printf("Result = %s\n",tr);
////        or
//        System.out.printf("Trimmer = %s",name.trim());

//5. Substring(int start.int end) // int end = excluded :
//        String browser = "Chrome";
//        String sub = browser.substring(2,5); //rom
//        System.out.printf("Result = %s",sub);

//6. replace('oldChar','newChar'):
//        String ga = "Gambr";
//        String rp = ga.replace('b','e');
//        System.out.printf("Result=  %s\n",rp); // Gamer
//
//        String name = "Harry";
//        System.out.printf("Result = %s\n",name.replace('r','p')); //Happy
//        System.out.printf("NewResult = %s",name.replace("rr","i")); //double quotes must be used

//7. startsWith("") AND endsWith(""):
//            String name = "Rahul";
//        System.out.printf("True/False : %s\n",name.startsWith("Ra")); //TRUE
//        System.out.printf("True/False : %s\n",name.startsWith("RA")); //FALSE
//        System.out.printf("True/False: %s\n",name.endsWith("ul")); //true
//        System.out.printf("True/False: %s\n",name.endsWith("UL")); //false

//8. charAt(atindex) :
//        String name = "Rahul";
//        System.out.printf("The Index is  : %s",name.charAt(3)); //u

//9 .indexOf(str) : It returns the first index
//        String name = "abcllld";
//        System.out.printf("The Index is : %s\n",name.indexOf("l")); //first position of l i.e at 3rd Index
//        System.out.printf("The Index is : %s\n",name.indexOf("l",3)); //i.e starts operation form 3rd index
////      If nothing is present it will return -1 value

//10. lastIndexOf() :
//        String name = "Punnam";
//        System.out.printf("Result = %s\n",name.lastIndexOf("n")); // 3
//        System.out.printf("Result = %s\n",name.lastIndexOf("n",2)); // 2

//11. equals("str") :
        String name = "Justin Langer";
        System.out.printf("True/False: %s\n",name.equals("justin langer")); //false
        System.out.printf("True/False: %s\n",name.equals("Justin Langer")); //true
        System.out.printf("True/False: %s\n",name.equalsIgnoreCase("JusTin Langer")); //true
//      The last method ignore the case





    }
}

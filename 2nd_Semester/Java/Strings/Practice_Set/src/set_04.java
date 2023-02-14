//a program to detect double and triple spaces in a string
public class set_04 {
    public static void main(String[] args) {
        String str = "This is a  String. Did you get three   Spaces!  anywhere";
        System.out.printf("Result = %s\n",str.indexOf("   ")); //tripe
        System.out.printf("Result = %s\n",str.indexOf("  ")); //double
//        if result = -1 no double and triple spaces
    }
}

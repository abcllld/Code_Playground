public class string {
    public static void main(String[] args) {
//        String is a class in java and not a primitive data type
        String name = "Rahul Mishra";
        System.out.println(name);
//        Strings are immutable in java that they cannot be changed
//Different ways to print statement statements in java :
String name1 = "Rahul Mishra is King";
        System.out.print("The Name is : ");
        System.out.println(name1);
        int a =9;
        float b = 5.8f;
        System.out.printf("The value of \na = %d\n and b = %f\n ",a,b);
        System.out.format("The value of \na = %d\n and b = %f\n  ",a,b);
//        both does the same work
    int s = 87;
    float f = 4.76f;
        System.out.printf("The value of a = %d and b = %f\n",a,b);
        System.out.printf("The value of a = %d and b = %.2f\n",a,b); // upto two decimal
        System.out.printf("The value of a = %d and b = %8.2f\n",a,b); //leaves 8 spaces and upto two decimal


    }
}
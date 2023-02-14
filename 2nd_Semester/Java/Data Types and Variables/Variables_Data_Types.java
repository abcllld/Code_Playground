
/*

There are mainly two types of data types in Java :
1) Primitive : int , long, double, short, byte, float, char , bool(total = 8).Also called intrinsic data type
2) Non-Primitive : Is derived from primitive data type


--> Java is Statically typed language that we have to declare the variables before use
1)Byte  : stores an Integer. 1 byte = 8 bits and in every bit can store 0 or 1.Default value = 0. Range = -128 to 127
1 byte * 8 = 8bits, - 2 to the power bits(here 8) divided by two, i.e, 2 raised 8 /2 = 2 raised to power 7 - 1 = result


 */

//program to add three no
public class Variables_Data_Types {
    public static void main(String[] args){

        int a =9;
       int b = 87;
        int c = 54;
//        System.out.println("The sum of no = "); -- will break the line from here
        System.out.print("The sum = "); // it will print the next linw with this line only
         System.out.println(a+b+c);
    }
}

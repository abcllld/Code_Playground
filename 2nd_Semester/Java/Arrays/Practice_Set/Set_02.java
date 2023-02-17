//Write a program to find out whether an element is present or not in an Array or not!

public class Set_02 {
    public static void main(String[] args) {
        int [] array = {76,54,88,33,21};
        int num = 54;
        boolean isPresent = false; //default is false
        for(int element:array){
            if(num == element){
                isPresent = true;
                break;
            }
        }

        if(isPresent){
            System.out.println("The value is Present is Array");
        }
        else{
            System.out.println("The value is NOT Present is Array");
        }
    }
}

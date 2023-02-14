import java.sql.SQLOutput;

public class Array_Length {
    public static void main(String[] args) {
        /*
        1.This is way one to display the array elements

        int [] marks = {98,65,123,78,94};
        System.out.println("Length = "+marks.length); //5

        float [] marks1 = {76.9f,43.76f,127.87f,99.54f}; //if f is not included precision will not come -- > No Eror
        System.out.println("Length = "+marks1.length);

        */

//        2.This is the Second way of displaying an Array :
//        int [] marks = {98,65,123,78,94};
//        for(int i = 0;i<marks.length;i++) {
//            System.out.println(marks[i]); //Transversal
//
//        }

//        Reversing the Array :
//        int [] marks = {98,65,123,783,94};
//        for(int i = marks.length-1;i>=0;i--) {
//            System.out.println(marks[i]);
//
//        }


//        3. This is the third wy of Displaying an Array:
                int [] marks = {98,65,123,783,94};
        for(int element: marks){
            System.out.println(element);
        }



    }
}



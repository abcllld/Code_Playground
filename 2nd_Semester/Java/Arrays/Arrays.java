public class Arrays {
    public static void main(String[] args) {
//        int [] marks = new int[5];
        //or
        int [] marks;
        marks = new int[5];
//        now memory is allocated for 5 students
//        Arrays are used to access elements faster
//        here 20 bytes(5*4=20) will be allocated
//        Here marks is a reference and array[] is an object
        marks[0] = 10;
        marks[1] = 17;
        marks[2] = 12;
        marks[3] = 121;
        marks[4] = 130;
//      The elements can be overwritten such as above marks[4] = 130 can be changed to 158
        marks[4] = 158;
        System.out.println(marks[4]);

//        Also declaration + initialization can be done at once:
        int [] marks1 = {25,87,76,21,3,125};
        System.out.println(marks1[3]);


    }
}

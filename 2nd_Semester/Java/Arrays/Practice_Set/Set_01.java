//Create an Array of 5 floats and calculate their Sum.
public class Set_01 {
    public static void main(String[] args) {
        float [] arrays = {65.87f,21.6f,33.764f,65.21f,33.33f};
        float sum = 0;
        System.out.print("The Sum of Arrays is : \n");
        for(int i=0;i<arrays.length;i++){
            sum = sum + arrays[i];
        }
        System.out.print(sum);

    }
}

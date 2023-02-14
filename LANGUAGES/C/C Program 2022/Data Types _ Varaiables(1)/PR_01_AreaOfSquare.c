// AREA OF SQUARE

// #include<stdio.h>
// int main(){
//     int side1,side2,area;

//     printf("The sides of the square is:\n");
//     scanf("%d%d", &side1,&side2);
    
//     // area = side1*side2;

//     printf("The area of square is = %d", side1*side2);
//     return 0;


// }


                        // OR


// To illustrate in a beautiful manner this is the process 

#include<stdio.h>
int main(){
    int side1,side2,area;

    printf("The side1 of the square is:\n");
    scanf("%d", &side1);


    printf("The side2 of the square is:\n");
    scanf("%d", &side2);
    
    
    area = side1*side2;

    printf("The area of square is = %d", area);
    return 0;


}
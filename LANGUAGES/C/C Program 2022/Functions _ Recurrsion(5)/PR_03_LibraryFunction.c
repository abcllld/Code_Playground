// Use a Library function to calculate the the square of a number given by user

#include<stdio.h>
#include<math.h>

int main (){
    int n;
    printf("Enter a number:\n");

    scanf("%d",&n);

    // printf("The sqr of the number is = %f",n*n);  

    // OR

    printf("The sqr of the number is = %d", pow(n, 5));

    return 0;
}


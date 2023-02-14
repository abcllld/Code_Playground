// Write a program to enter the price of three items and print their final cost with gst


#include<stdio.h>
int main(){


    float price[3];


    printf("Enter the price of 1st item:");
    scanf("%f",&price[0]);

    printf("Enter the price of 2nd item:");
    scanf("%f",&price[1]);

    printf("Enter the price of 3rd item:");
    scanf("%f",&price[2]);

    printf("Final price of 1st = %f\n", price[0] + (0.18*price[0]));
    printf("Final price of 2nd = %f\n", price[1] + (0.18*price[1]));
    printf("Final price of 3rd = %f\n", price[2] + (0.18*price[2]));


    return 0;
}
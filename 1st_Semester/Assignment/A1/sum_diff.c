// Write a program to take two numbers as input and print their difference if the first number is greater than the second number otherwise print their sum.

#include<stdio.h>
int main(){
    int n1,n2;
    printf("\nEnter the first no : ");
    scanf("%d",&n1);

    printf("\nEnter the second no : ");
    scanf("%d",&n2);

    if(n1>n2){
        printf("\nThe difference of two = %d",(n1-n2));
    }
    else{
        printf("\nThe Sum of two is = %d",n1+n2);
    }
return 0;
}
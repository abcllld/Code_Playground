// write a program to find the largest of three NUmbers

#include<stdio.h>
int main(){

    int a,b,c;

    printf("Enter the firstNumber: ");
    scanf("%d",&a);

    printf("Enter the secondNumber: ");
    scanf("%d",&b);

    printf("Enter the thirdNumber: ");
    scanf("%d",&c);


    if(a>b & a>c){
        printf("%d is the Largest No",a);
    }

    if(b>c & b>a){
        printf("%d is the Largest No",b);

    }
    if(c>b & c>a){
        printf("%d is the Largest No",c);

    }

    return 0;
}
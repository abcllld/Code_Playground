// Write a program to check whether a given no is Odd or Even

#include<stdio.h>
int main(){
    int n;
    printf("Enter any No : ");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("%d is Even",n);
    }

    if(n % 2 != 0){
        printf("%d is Odd",n);
    }
    return 0;

}
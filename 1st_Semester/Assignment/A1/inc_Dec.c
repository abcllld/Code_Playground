// Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

#include<stdio.h>
int main(){
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);

    if(n%4==0){
        printf("%d",++n);
    }
    else{
        printf("%d",--n);
    }
    return 0;
}
#include<stdio.h>

int main(){

    int n,rev=0,rem,palindrome;

    printf("Enter any Number : ");
    scanf("%d",&n);

    palindrome=n;

    while(n!=0){

        rem = n % 10;

        rev = rev * 10 + rem;

        n = n / 10;

    }

    if(palindrome==n){
        printf("The Palindrome of %d = %d",n,palindrome);
    }

    else{
        printf("The Palindrome for %d does not exist",n);

    }
}
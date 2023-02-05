#include<stdio.h>

int main(){

    int n,rev,rem=0;

    printf("Enter any Number : ");
    scanf("%d",&n);

    while(n!=0){

        rem = n % 10;

        rev = rev * 10 + rem;

        n = n / 10;

    }

    printf("The reverse of %d is = %d",n,rev);

    return 0;
}
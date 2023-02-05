#include<stdio.h>
int main(){
    int rem,rev=0,palin;
    int n,temp;
    printf("Enter any no : ");
    scanf("%d",&n);

    palin = n;
    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n =n/10;
    }
    // printf("The reverse of %d is %d",temp,rev);
    if(palin==rev){
        printf("%d is Palindrome no. ",palin);
    }
    else{
        printf("%d is NOT Palindrome no. ",palin);

    }
    return 0;
    //it's also working
}
#include<stdio.h>
int main(){
    int n,rem,sum=0;
    int temp;
    printf("Enter any no : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem = n % 10;
        n = n / 10;
        sum = sum + (rem*rem*rem);
    }
    if(sum==temp){
        printf("\n%d is ArmStrong no ",temp);
    }
    else{
        printf("\n%d is not ArmStrong no",temp);
    }
    return 0;
}
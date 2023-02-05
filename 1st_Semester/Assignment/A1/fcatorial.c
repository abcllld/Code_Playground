#include<stdio.h>
int main(){
    int n,i;
    int fact = 1;
    printf("Enter any no : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("\nThe factorial of %d is = %d ",n,fact);
    return 0;
}
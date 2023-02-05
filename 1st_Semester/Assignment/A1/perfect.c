#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter any no : ");
    scanf("%d",&n);

    printf("\nThe divisor of %d are : ",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
            sum = sum + i;
        }
    }
    printf("\nThe sum of the divisor of %d is %d",n,sum);

    if(n==sum){
        printf("%d is a perfect no ",n);
    }
    else{
        printf("\n%d is not perfect no ",n);
    }
    return 0; 
}
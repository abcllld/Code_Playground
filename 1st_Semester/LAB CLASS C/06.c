// Write a program to check whether a given no is Prime or Not

#include<stdio.h>
int main(){
    int n,i,count;
    printf("Enter any Number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(n % i == 0){
            count++;

        }
    }

    if(count==2){
        printf("%d is Prime No",n);
    }
    else{
        printf("%d is Not Prime No",n);
    }

    return 0;

}
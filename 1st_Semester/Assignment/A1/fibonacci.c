#include<stdio.h>
int main(){
    int first=0,second=1,next;
    int n,i;

    printf("enter no of terms : ");
    scanf("%d",&n);

    printf("\nFibonacci series upto %d are : ",n);
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n",next);
    }
    return 0;
}
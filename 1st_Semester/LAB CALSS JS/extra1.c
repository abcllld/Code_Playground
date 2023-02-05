#include<stdio.h>
int main(){
    int r,n,b=0,base=1;
    printf("Enter no : ");
    scanf("%d",&n);

    while(n!=0){
        r =n%2;
        b = b+(r*base);
        n = n/2;
        base= base*10;

    }
    printf("BInary = %d",b);
    return 0;

}
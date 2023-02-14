// print no from 0 to n if is given by user(n=4) using while loop

#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:\n");
    scanf("%d",&n);

    int i = 0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0; 
}
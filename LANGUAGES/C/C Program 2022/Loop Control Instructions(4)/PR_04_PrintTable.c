// Print the table of a no input by user

#include<stdio.h>
int main(){
    int t;
    printf("Enter a number :\n");
    scanf("%d",&t);

    for(int i=1; i<=10; i++){
        printf("%d\n",t*i);

        
    }
    return 0;
}
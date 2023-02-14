// Keep taking input from the user until the user enters a no which is multiple of 7


#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter a no:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7 == 0){
        printf("The %d is a multiple of 7\n",n);

            break;
        }

    }while(1);
    printf("Thank You!");
    return 0;
}

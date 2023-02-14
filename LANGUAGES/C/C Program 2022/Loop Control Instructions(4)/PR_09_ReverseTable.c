// Print the REVERSE of the Table for a number "n"

#include<stdio.h>
int main(){
    int t;
    printf("Enter No:");
    scanf("%d",&t);

    for(int i =10;i>=1; i-- ){
        printf("%d\n",t*i);
    }
    return 0;
}
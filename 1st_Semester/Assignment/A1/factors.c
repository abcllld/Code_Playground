#include<stdio.h>
int main(){
    int n,i;
    printf("Enter any no : ");
    scanf("%d",&n);

    printf("Factors of %d are\n",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
return 0;
}
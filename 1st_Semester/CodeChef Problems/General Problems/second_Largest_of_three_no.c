#include<stdio.h>
int main(){

    int a, b ,c;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    printf("Enter the value of c : ");
    scanf("%d",&c);

    if(a>=b && a>=c){

        if(b>=c){
            printf("%d is the 2nd largest No\n",b);
        }
        else{
            printf("%d is the 2nd largest No\n",c);
            
        }
    }

    else if(b>=a && b>=c){
        if(a>=c){
            printf("%d is the 2nd largest No\n",a);

        }
        else{
            printf("%d is the 2nd largest No\n",c);

        }
    }

    else if(c>=a && c>=b){
        if(a>=b){
            printf("%d is the 2nd largest No\n",a);

        }

        else{
            printf("%d is the 2nd largest No\n",b);

        }
    }

    return 0;
}
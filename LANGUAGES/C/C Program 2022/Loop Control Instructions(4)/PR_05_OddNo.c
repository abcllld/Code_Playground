// Keep taking input from the user until the user enters a ODD number



#include<stdio.h>
int main(){
    int n;
    do{
         printf("Enter the no:");
         scanf("%d",&n);
         printf("%d\n",n);

         if(n % 2 != 0 ){
            printf("The %d is a ODD no\n",n);
            break;
         }

    }while(1);  //IT is infinite as 1 means TRue but the break has been applied
    printf("Thank You!");
return 0;

}

// With for loop



#include<stdio.h>
int main(){

int n;
 printf("Enter the no:");
         scanf("%d",&n);

 for(int i=1; i<=n;i++){

     if(n%2!=0){
        break;
    }
    printf("%d\n",i);


 }
return 0;
}
// The for loop doesn't work good ... how to solve with for loop
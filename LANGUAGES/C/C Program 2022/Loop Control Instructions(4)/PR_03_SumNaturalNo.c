// Print the SUM of first n natural numbers...And also print them in reverse order using loop

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum = sum + i;
    } 
        printf("Sum is:%d\n",sum);


// Reverse order
          for(int i =n; i<=n; i--){
        printf("%d",i);
    } 

return 0;
}

//Did n't understand

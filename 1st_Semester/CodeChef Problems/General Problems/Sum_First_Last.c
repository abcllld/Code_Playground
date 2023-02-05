// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number. 


#include <stdio.h>
int main()
{

int t;
scanf("%d",&t);

while(t--){
    
    int n,lastDigit,sum;
    scanf("%d",&n);
    
    lastDigit=n%10; //from here get last digit i.e 456%10===>6
    
    while(n>9){ //enter a double digit no
        
        n=n/10;  //keep dividing n unless we get firstdigit i.e 4 in 456
    }
    sum=n+lastDigit;
    printf("Sum of First and Lst digit is = %d",sum);
}
    return 0;

}






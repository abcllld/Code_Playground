// Write a function to calculate the Sum, Product & average of two numbers. Print that average in the main  function 

#include<stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);


int main(){
    int a = 8, b = 9;
    int sum, prod, avg;
    doWork(a,b, &sum, &prod, &avg);
    printf("Sum = %d\n Product = %d\n Average = %d\n",sum,prod,avg);

    return 0;
}
void doWork(int a, int b, int *sum, int *prod, int *avg){
    * sum = a + b;
    * prod = a * b;
    * avg = (a + b)/2;

}
// Here int a, int b; uses pass by value because we do need any change in values of a and b

// And int *sum, int *prod, int *avg uses pass by value
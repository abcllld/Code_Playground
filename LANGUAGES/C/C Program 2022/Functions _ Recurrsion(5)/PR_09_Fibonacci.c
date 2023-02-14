// Write a function to print the n terms of a fibonacci series

// 0,1,1,2,3,5,8,13,21----these are Not random no 
// Every no is the sm of two previous no ----this is fibonacci series...
// fb(5) = fb(3) + fb(2);;

// Thus fb(n) = fb(n-1) + fb(n-2);

#include<stdio.h>
int fib(int n);
int main(){
fib(5);
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1 = fib(n-1);  //Here Nm1 means n-1
    int fibNm2 = fib(n-2); 
    int fibN = fibNm1 + fibNm2;
    printf("The fibonacci series of %d is = %d\n",fibN);
    return fibN;
}

// Print the factorial of n

// 5! = 1*2*3*4*5
// 4! = !*2*3*4

// 1! = 1

#include<stdio.h>
int factorial(int n);
int main(){
    printf("The factorial is = %d",factorial(4));
    return 0;
}
int factorial(int n){
    if(n == 1){
        return 1;
    }

    //    if(n == 0){
    //     return 1;----Correct this one also...
    // }
    int fact1ToN = fact(n-1);
    int factN = fact1ToN * n;
    return factN; 
}

// If no BASE CASE the memory crashes...i.e if we have not written n ==1 that is Stop AT 1....tHEN IT WOULD HAVE GONE TO 0 AND STARTS PRINTING -VE VALUES ALSO



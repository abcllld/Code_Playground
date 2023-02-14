// Write a program to store the first n fibonacci numbers

// nth = (n-1) + (n-2);

#include<stdio.h>
int main(){
    int n;
    printf("Enter a No(n>2) : ");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1; 

    for(int i = 2; i < n; i++){

        fib[i] = fib[i-1] + fib[i-2];

        printf("%d\t",fib[i]);
        
    }
    printf("\n");
    // It is important to mention the 0 and 1 value in fibonacci series;
    return 0;

}

// If typed 10 it will show 8 fib no........... as 2 no we have already declared i.e 0 and 1

// This is LOOP method and we also done by recursion

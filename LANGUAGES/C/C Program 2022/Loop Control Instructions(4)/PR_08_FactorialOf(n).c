// Print the factorial of no "n"

// factorial= n!========[(n-1)(n)]/n!-------Is it correct



#include<stdio.h>
int main(){
    int n;
    printf("Enter No:");
    scanf("%d", &n);

    int fact = 1;
    for(int i = 1; i<=n; i++){
    fact = fact * i;
    }
    printf("Final Factorial is:%d\n", fact);

    return 0;
}

// **********Note------> int will be unable to store fact value of large no such as 2345... In fact float and other will also fail to store such large values ... So they are stored by some special methods (which is not our consideration);
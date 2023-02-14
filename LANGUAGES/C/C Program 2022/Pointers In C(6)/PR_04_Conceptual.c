// Will the address output be the Same

void printAddress(int n);

#include<stdio.h>
int main(){
    int n =4;
    printAddress(n);
    printf("The address1 is = %u\n",&n);


    return 0;
}
void printAddress(int n){
    printf("The address2 is = %u\n",&n);
}


// Here n =4 which has address 2000(let);--;Line 8

// Line 14-- This will have address different as 2000 is already the address of Line 8... It can be 2001...
// This is because it is call by value---which is clear from Line 13

// Answer =====>> No the address output will not be same
// The address2 is = 2510799772
// The address1 is = 251079979

// The scenario changes in call by reference


void _printAddress(int *n);

#include<stdio.h>
int main(){
    int n =4;
    _printAddress(&n);
    printf("The address1 is = %u\n",&n);


    return 0;
}
void _printAddress(int *n){
    printf("The address2 is = %u\n",n);
}


// The address2 is = 2993399172
// The address1 is = 2993399172

// The both  address are same





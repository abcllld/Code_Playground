                    // Recursion

// When a function calls itself, it's called recursion

#include<stdio.h>
void printHw(int count); //count is a parameter here

int main(){
    printHw(5); //This value of 5 gets stored in count
return 0;
}

void printHw(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printHw(count-1);// Recursive function
    // This fun after calling printHw(we called it) ...It again call itself times and times
}


// Let f(x) = x^2

//Find f(1)------------f(1)= 1^2 = 2;
// find f(f(x))------------f(f(1)) = f(f(2)) = f(4) = 16 
//  Similarly we can find f(f(f(f(f(f(x))))))------
// This is an e.g of recursion that first we called f and then it calls another f ..another f, another f....so on


// PROPERTIES OF RECURSION

// a. Anything that can be done with Iteration, can be done with
// recursion and vice-versa.

// b. Recursion can sometimes give the most simple solution.

// c. Iteration has infinite loop & Recursion has stack overflow

// d. Base Case is the condition which stops recursion.






#include<stdio.h>
// declaration/prototype------>>step(1)
void printHello();
int main(){

    printHello(); //function call----->>step(3)
    printHello();
    printHello();
    printHello();
    printHello();
// This will keep on printing hello so on once we have declared the function
    return 0;
}

// function definition----->>step(2)
void printHello(){
    printf("Hello!!\n");
    printf("I am a good boy:)\n");
}
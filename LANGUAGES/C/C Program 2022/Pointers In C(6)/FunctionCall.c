// #include<stdio.h>
// void Square(int n);
// int main(){
//     int number = 4;
//     Square(number);
//     printf("The value of square is = %d\n",number); //----> 16

//     return 0;
// }
// void Square(int n){
//     n = n*n;
//     printf("Square is = %d\n",n);  //------> 16
// }

// We have already learned that number value makes a copy in function definition value which is n here;

// One can keep changing the value in  definition but it will have no effect in int main() function....But if one changes the value in the int main() function it will certainly effect i the function definition......

// That is we are passing the VALUE as ARGUMENTS which is Call by value;

// Let Us See this one

#include<stdio.h>
void _Square(int *n);
int main(){
    int number = 4;
    _Square(&number);
    printf("The value of square is = %d\n",number);  //-----> 16

    return 0;
}
void _Square(int *n){
    *n = (*n) * (*n);
    printf("Square is = %d\n",*n);  //----------> 16
}

// This time we are copying the ADDRESS of the variable by using "*"

// Is bar hamne Address ko hi change kar diya Line 32,33 mein... Aur wo jake copy hogaya ab number mein

// UNderstanding the concept-----

// (1)===> Hamare pas ek variable tha "number" jiska address tha man lo 2000 aur uska andar value store tha 4...

// (2)=> Hamane ek function calL lagaya Pointer ko jiska nam "n" hai...Pointer ne 2000 address store kar liya "number" wala variable ka

// (3)====> So ab jo bhi change hoga wo star ka andar hi hoga

// (4)=====>(*n) * (*n)==========4 * 4 =16

// (5)====>Aur yahi 16 ab store ho gaya number ka andar...Permanently


// THUS=---------------------------------------------------------*******



// Pointers in Function Call

// Call by Value-----We pass address of variable as argument

//call by Reference-----We pass value of variable as argument


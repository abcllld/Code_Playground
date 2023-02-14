// // Operators

// // a. Arithmetic Operators--------------+,-,*,/,%

// // b. Relational Operators-------== , >, <, >=, <=, !=

// // c. Logical Operators-------------- AND(&&), OR(||), NOT(!)

// // d. Bitwise Operators-----------

// // e. Assignment Operators-----------

// // f. Ternary Operator--------Condition operator




// // Relational Operators

// // ==
// // >, >=
// // <, <=
// // !=

// #include<stdio.h>
// int main(){

// printf("%d\n", (5>=4));  
// return 0;
// }



// // Logical Operators

// // && AND------All cond TRUE the output TRUE
// // ||OR------Any one or both TRUE the output TRUE
// // !NOT-------Output TRUE if cond FALSE and VICE-VERSA



// #include<stdio.h>
// int main(){

// printf("%d\n", (9!=4)&&(5>=4));   //true
// printf("%d\n", (7>4)||(8<4));   //true
// printf("%d\n", (!(9>4)&&(5>4))); //false

// return 0;

// }


//                 // Operator Precedence

// // Priority                                         Operator
// // 1                                                !
// // 2                                                *, /, %
// // 3                                                +, -
// // 4                                                <, <=, >, >=
// // 5                                                ==, !=
// // 6                                                &&
// // 7                                                ||
// // 8                                                =



// // Assignment Operators

// // =
// // +=---------shorthand operator
// // -=
// // *=
// // /=
// // %=


#include<stdio.h>
int main(){
    int a= 5;
    int b =6;
    // a = a + b;  OR
    a+=b;           //shorthand
    printf("%d",a);
    return 0;
}



























// // NOTE--- IN C, WE HAVE TRUE AS 1(In fact any non-zero no in C represents TRUE 1,3,65,,8,2,1,3,6,5,4,-9,-4 etc...) AND 0 CORRESPONDS TO FALSE


// POINTERS

// A variable that stores the memory
// address of another variable

// A data in stored in a memory and inside the memory block and that block of memory is named as a variable ...

// Let age = 22 has address 2010...the address is fixed

// Now if we want to store to MEMEORY LOCATION instead of a data value(22) then pointers are used

// Pointers are also variable

// Syntax

// int age = 22;   

// int *ptr = &age;             Here * is called (value at address operator);

// int _age = *ptr;             Here & is called (address of operator);


// #include<stdio.h>
// int main(){
//     int age = 23;
//     int *ptr = &age;
//     int _age = *ptr;
//     printf("%d",_age);  //---------->>23 answer
//     return 0;
// }


// Declaring Pointers

// (1)------------------------int *ptr;         int age = 22;
// (2)------------------------char *ptr;        char star = '$';
// (3)------------------------float *ptr;       float price = 109.56;



// Format Specifier

// printf("%p", &age);              printf("%d", age);       d

// printf("%p", ptr);               printf("%d", *ptr);

// printf("%p", &ptr);              printf("%d", *(&age));

//------> To print in UNSIGNED INT way we use %u 





// #include<stdio.h>
// int main(){
//     int age = 23;
//     int *ptr = &age;

//     // Printing Address

//     //printf("%p\n",&age); //----->>Will result in a hexadecimal value which may vary from machine to machine 
//     printf("%u\n",&age);

//     printf("%u\n",ptr);
//     printf("%u\n",&ptr);

//     return 0;
// }




#include<stdio.h>
int main(){
    int age = 23;
    int *ptr = &age;

    // Printing Value
    printf("%d\n",&age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

    return 0;

}





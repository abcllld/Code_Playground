            // Arrays


// Collection of similar data types stored at
// contiguous memory locations

// NOTE--data type must be Similar

// #include<stdio.h>
// int amin(){
//     int marks1 = 87;
//     int marks2 = 78;
//     int marks3 = 90;
//     // This normal way of storing three int data types

//     //  With Array
//     int marks[] = {87,78,90};

// }

// Syntax-------------------->>

// int marks[3];

// char name[10];

// float price[2];

/* where int = Data type;;
         marks = Name of array
         [] = size of array*/

// As we write int marks[3] ... There is a variable name marks is created in the memory which reserves 3 block of int i.e 4bytes each block


// NOTE--------> In C we have first position as 0 base indexing(not 1) 


                // Input & Output

// scanf("%d", &marks[0]);

// printf("%d", marks[0]);


#include<stdio.h>
int main(){
    int marks[3];

    printf("Enter Marks of Physics:");
    scanf("%d",&marks[0]);

    printf("Enter Marks of Chemistry:");
    scanf("%d",&marks[1]);
    
    printf("Enter Marks of Mathematics:");
    scanf("%d",&marks[2]);

    printf("Physics = %d Chemistry = %d  Mathematics = %d", marks[0],marks[1],marks[2]);
    return 0;
}


// NOTE----If marks[3] is entered then the compiler will not throw an error but at the Run Time it will abort as soon as we type the marks of marks[3].....................*****************************




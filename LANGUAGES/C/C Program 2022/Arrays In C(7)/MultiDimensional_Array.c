// Multidimensional Arrays


// NOTE:- Til  now we have only 1-D array i.e Linear Array..

// 2 D Arrays
// int arr[ ][ ] = { {1, 2}, {3, 4} };//Declare

// //Access
// arr[0][0] 
// arr[0][1]
// arr[1][0]
// arr[1][1]

// We can see array in the form of a matrix

// 00, 01, 10, 11, 02,20, 22...etc

// The size of a array remains the same always 

// Let sus create a 2-d array to store 2 child three subjects marks

#include<stdio.h>
int main(){
    int marks[2][3]; // _ _ _ || _ _ _  

    marks[0][0] = 98;
    marks[0][1] = 91;
    marks[0][2] = 96;


    marks[1][0] = 67;
    marks[1][1] = 98;
    marks[1][2] = 79;

    printf("%d", marks[0][0]);
return 0;
}


// In the same way we can have 3-D, 4-D....array but its not much of use


// Array is a Pointer

// int *ptr = &arr[0];

// int *ptr = arr;

// The line 3 can be replaced by line 4 as the fits index no of a array is a POINTER 

// Let us we have an array named marks[5];

// The array marks is actually a pointer indicating towards to its first indices i.e 1st




// TRANSVERSE OF AN ARRAY

// int aadhar[10];
// int *ptr = &aadhar;

// Let we have array named aadhar;

// when we do *ptr = &aadhar_. then it will print the aadhar value in the 0 indices in the printf statement

// The  ptr++ will print the 1 indices and so on we can print the 9 indices i.e total o f10 values

// In this we we can loop an array which will keep on storing data in memory either in input or output 

#include<stdio.h>
int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];

    for(int i=0; i<5; i++){
    printf("%d index:", i);
    // scanf("%d",(ptr + i));   //ptr + i because first 0 then 1 then 2.....so on
    // OR
     scanf("%d",&aadhar[i]); 

    }
        // output
        for(int i=0; i<5; i++){
            // printf("index = %d \n",*(ptr + i));  //OR

            printf("index = %d \n",aadhar[i]); 

        }
        return 0;
    }

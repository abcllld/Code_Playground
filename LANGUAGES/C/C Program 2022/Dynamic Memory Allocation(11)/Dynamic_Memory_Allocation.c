// Dynamic Memory Allocation:--------->>

// NOTE:- Always use the #include<stlib.h > in DMA

// It is a way to allocate memory to a data structure during
// the runtime.

// We need some functions to allocate
// & free memory dynamically.




// Functions for DMA:------>>

// a. malloc( )   ------->>memory allocation

// b. calloc( )------->> continuous allocation 

// c. free( )------->>   

// d. realloc( )  ------->>re- allocation





// (A) ->>malloc( )

// takes number of bytes to be allocated
// & returns a pointer of type void

// ptr = (int*) malloc(5 * sizeof(int));


// #include<stdio.h>
// int main(){
//     printf("%d\n", sizeof(int));
//     printf("%d\n", sizeof(float));
//     printf("%d\n", sizeof(char));


//     // NOTE:-This is the use of sizeof


//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr = (int*)malloc(5*sizeof(int));

//     ptr[0] = 3;
//     ptr[1] = 6;
//     ptr[2] = 8;
//     ptr[3] = 2;
//     ptr[4] = 9;

//     for(int i=0; i<5; i++){
//         printf("%d\n",ptr[i]);
//     }


//     return 0;
// }





// (B)--->>calloc( )

// initializes with 0--->>>*********important

// ptr = (*int) calloc(5, sizeof(int));
// continuous allocation)

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     float *ptr;
//     ptr = (float*)calloc(5, sizeof(float));

//     for(int i=0; i<5; i++){
//         printf("%f\n",ptr[i]);
//     }


//     return 0;
// }
// NOTE:It will always return 0 value




// (C)--------->> free( )

// We use it to free memory that is allocated
// using malloc & calloc

// free(ptr);

// Practice questions--->>Not cleared




//  (D)----------->>realloc( )

// reallocate (increase or decrease) memory using the same pointer & size.

// ptr = realloc(ptr, newSize);


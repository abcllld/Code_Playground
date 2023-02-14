// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.


#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));

    printf("Enter a no(5):");
    for(int i =0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8); 
    printf("Enter a no(8):");
    for(int i =0; i<8; i++){
        scanf("%d", &ptr[i]);
    }

    //print
     for(int i =0; i<8; i++){
        printf("Number %d is %d", i,ptr[i]);
    }


    // Now if we wan to add more memory to above let us prvoious it was 5 let us increase it to 8 i.e 3 more space

    ptr = realloc(ptr, 8);
}
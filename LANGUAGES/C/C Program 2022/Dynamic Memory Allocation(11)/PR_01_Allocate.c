// Write a program to allocate memory to store 5 prices.

#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float*)malloc(5*sizeof(float));

    ptr[0] = 12;
    ptr[1] = 18;
    ptr[2] = 43;
    ptr[3] = 65;
    ptr[4] = 70;

    for(int i =0; i<5; i++){
        printf("%f\n", ptr[i]);
    }

}
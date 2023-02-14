// 2 numbers a & b are written in a file. Write a program to replace them with their sum

#include<stdio.h>
int main(){

    FILE *fptr;

    fptr = fopen("practice4.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);

    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);


    fptr = fopen("practice4.txt", "w");

    fprintf(fptr, "%d", a + b);

    fclose(fptr);

}

// We have first open in read mode. Saw the value of a and b (let a = 5, b = 8) and then opened in write mode to delete those a and b value and instead overwrite with their sum

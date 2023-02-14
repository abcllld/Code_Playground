// Make a program to read 5 integers from  a file .

#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("practice.txt", "r");

    int read;

    fscanf(fptr, "%d", &read);
    printf("%d\n", read);

    fscanf(fptr, "%d", &read);
    printf("%d\n", read);

    fscanf(fptr, "%d", &read);
    printf("%d\n", read);

    fscanf(fptr, "%d", &read);
    printf("%d\n", read);

    fscanf(fptr, "%d", &read);
    printf("%d\n", read);

    fclose(fptr);

    return 0;
}
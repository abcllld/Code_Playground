// Write a program to write all the Odd numbers from 1 to n in a File.

#include<stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("practice3.txt", "w");

    int n;

    printf("Enter a Number:");

    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        fprintf(fptr, "%d\n", i);
    }

    fclose(fptr);


    return 0;
}
// Write a function named slice, which takes string and returns a sliced string from index n to m 


// Suppose we have n = 3, m = 6 and we have "HelloWorld"...so after slicing  loWo will only be returned because it starts at n =3 and ends at m = 6;


#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){
    char str[] = "HelloWorld";
    slice(str, 3, 6); 
    return 0;
}

void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i = 0; i<=m; i++){

        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}



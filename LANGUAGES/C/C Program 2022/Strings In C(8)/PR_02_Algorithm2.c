// Ask the use rto enter their firstName and print it back to them
// Also try this with their fullName

#include<stdio.h>
int main(){
    char firstName[50];
    printf("Enter your Name:");
    scanf("%s", firstName);
    printf("Your firstname is: %s",firstName);
}



#include<stdio.h>
int main(){
    char fullName[50];
    printf("Enter your Name:");
    scanf("%s", fullName);
    printf("Your name FullName is: %s",fullName);
}

// If we enter the full name i.e RAHUL MISHRA...but it will print only RAHUL and not Mishra.This is because----------->



// *************************IMPORTANT:-*************************

// scanf( ) cannot input multi-word strings with spaces

// Here, 

// **gets( )** & **puts( )** come into picture


// String Functions

// gets(str) ----------->>Input a string (even multiword)------->>>But it is // Dangerous & Outdated. So fgets() are used

// puts(str) -------------->>Output a string

// fgets( str, n, file)------>>/ stops when n-1 chars input or new line is entered where n = size of string, file name = stdin(standard Input); It stops at size-1


#include<stdio.h>
int main(){

    char str[100];
    gets(str); //------It will throw warning of being unsafe
    puts(str);
    return 0;
}


#include<stdio.h>
int main(){

    char str[100];
    fgets(str, 100, stdin); //------It will throw warning of being unsafe
    puts(str);
    return 0;
}


// NOTE:-- Whenever we enter puts s it automatically go to next line so we do not need to enter "\n"--Line break






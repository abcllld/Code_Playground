// To check if a given character is digit or not

// #include<stdio.h>
// int main(){
//     char check = '5';
//     printf("Enter the character to be checked:\n ");
//     scanf("%c",&check);
//     printf("%c",check<='0',check);
//     return 0;
// }

// Not able to do the program

// Let Us do by if -else

#include<stdio.h>
char main(){
 int ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch >='0' && ch <= '9')
    printf("%c is a DIGIT ",ch);
    
    else
    printf("%c is CHARACTER",ch);
    
    return 0;
}

// UNABLE TO PERFORM THE PROGRAM WITH IF ELSE ALSO..........*************

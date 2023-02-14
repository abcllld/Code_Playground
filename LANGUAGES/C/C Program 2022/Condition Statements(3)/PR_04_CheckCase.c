// Write a program to check if a character entered by a user is UPPER case ot not


#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);

    if(ch>='A' && ch<'Z') {
        printf("You have entered a UPPER case character\n");
    // Note that every chacter has a SKY value which could be written in place of character i.e ch>='a' is equal to ch>=97(HOVER OVER 'a' and you can see 97)
    }
    else if(ch>='a' && ch<'z'){
        printf("You have not entered a LOWER case character\n");

    }
    else{
        printf("This is nor English");
    }
}


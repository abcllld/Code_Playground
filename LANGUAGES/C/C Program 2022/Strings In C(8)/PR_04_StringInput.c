// Write a program to take String input from the user using %c

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    int i =0;

    while(ch != '\n'){  //'\n'Till we press ENTER keep adding character to string
        scanf("%c",&ch);
        str[i] = ch;    //addition of characters
        i++;
    }
    str[i] = '\0'; //This time we also have to'\0' as we are using '%c' and not '%s'........

return 0;
}


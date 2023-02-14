// Write a function that prints Namaste if the user is Indian and Bonjour if the user is French

#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
    printf("Print f for French and i for Indian:");
    char ch;
    scanf("%c",&ch);

    if(ch== 'i'){
        Namaste();
}
else{
    Bonjour();
    }

    return 0;
}
void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}
// Check if a given character is present in a string gor not 


void checkChar(char str[], char ch);
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Rahul";
    char ch = 'a';
    checkChar(str, ch);
    return 0;

}
void checkChar(char str[], char ch){
    for(int i=0; str[i]!= '\0'; i++){
        if(str[i] == ch){
            printf("Character is Present\n");
                return;
        }
    }
    printf("Character is NOT present");
}

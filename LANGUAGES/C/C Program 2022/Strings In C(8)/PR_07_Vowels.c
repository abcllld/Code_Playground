// Write a function to calculate the occurrence of vowels in a string


#include<stdio.h>
#include<string.h>
void countVowels(char str[]);

int main(){
    char str[100] = "HelloWorld";

    // printf("The vowels in above string are:- %d", countVowels(str));
    //countVowels -->> what is the problem in the above line Line 10

    return 0;
}

void countVowels(char str[]){
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        count++; 
        }
    }
    return count;
}

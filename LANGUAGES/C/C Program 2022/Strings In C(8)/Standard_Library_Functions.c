// Standard Library Functions ==>> <string.h>

// ********************(1)->> strlen(str)*******************************

// It counts number of characters excluding '\0'


#include<stdio.h>
#include<string.h>
int libFunctions(char name[]);
int main(){
    char name[60];
    fgets(name, 60, stdin);
    int length = strlen(name); //Here we type-casted in to char; 
    printf("The Length is: %d", length);

    return 0;
}
int libFunctions(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;

}



// ******************** (2)-->>strcpy(newStr, oldStr)****************************

// It copies value of old string to new string

#include<stdio.h>
#include<string.h>
int main(){

    char oldStr[] = "OldString";
    char newStr[] = "NewString";
    strcpy(newStr, oldStr);
    puts(newStr);  //Prints OldString

    return 0;
}



// ********************(3)-->>strcat(firstStr, secStr)*************************

//It concatenates first string with second string


#include<stdio.h>
#include<string.h>
int main(){

    char firstStr[] = "Hello";
    char secondStr[] = "World";
    strcat(firstStr, secondStr);
    puts(firstStr);  //Prints HelloWorld

    // puts(secondStr);  
    return 0;
}

// NOTE:- The length  of firstString >= Length(firstString + secondString);
// But in my case although i have not given the size then also it is printing





// ***********(4)--->>strcmp(firstStr, secStr)************************

// It Compares 2 strings & returns a value

// 0 -> string equal
// "Hello" == "Hello"; So it gives 0 

#include<stdio.h>
#include<string.h>
int main(){
    char firstStr[] = "hello";
    char secStr[] = "hello";
    printf("%d", strcmp(firstStr, secStr)); 
    return 0;
}



// positive -> first > second (ASCII)
// "Banana">"Apple"====> As ASCII value of 'B'> 'A'.So it will return a +ve value

#include<stdio.h>
#include<string.h>
int main(){
    char firstStr[] = "Banana";
    char secStr[] = "Apple";
    printf("%d", strcmp(firstStr, secStr)); 
    return 0;
}

// negative -> first < second (ASCII)
// "Apple"<"Banana"====> As ASCII value of 'B'>'A'. So it will return -ve value

#include<stdio.h>
#include<string.h>
int main(){
    char firstStr[] = "APPLE";
    char secStr[] = "BANANA";
    printf("%d", strcmp(firstStr, secStr)); 
    return 0;
}














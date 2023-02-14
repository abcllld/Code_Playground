// Create a string named firstName and lastName to store the details of the user and print all the characters using the loop

// #include<stdio.h>
// int main(){
// char firstName[] = "RAHUL";
// char lastName[] = "MISHRA";

// for(char i = 0; i <='Z'; i++){
//     if(firstName == '\0');
//     break;
//     printf("%s",firstName);
// }
// for(char j = 0; j<='Z'; j++){
//     if(lastName == '\0');
//     break;
//     printf("%s",lastName);

// }
// return 0;
// }

// Is the above method true---But no output




#include<stdio.h>
void printString(char arr[]); //we do not need to mention the size of the array because the string will end as soon as it finds '\0'...

int main(){
char firstName[] = "RAHUL";
char lastName[] = "MISHRA";
printString(firstName);
printString(lastName);

return 0;
}

void printString(char arr[]){
    for( int i = 0; arr[i] != '\0'; i++){  //Condition--arr[i] != '\0'
        printf("%c",arr[i]);
    }
    printf("\n");
}

// NOTE:- In normal array we mention the size because we do not when when will the array end but in case of string we do know that as soon as the '\0' comes the array of string will terminate 





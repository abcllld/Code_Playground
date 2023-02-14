// Make a Program that inputs user name and prints its length

// #include<stdio.h>
// int countLength(char name[]);

// int main(){
//     char name[100];
//     fgets(name, 100 , stdin); //eNTER THE NAME WITHOUT SPACES

//     printf("Length is : %d", countLength(name));

//     return 0;
// }

// int countLength(char name[]){
//     int count  = 0;
//     for(int i = 0; name[i] != '\0'; i ++ ){
//         count++;  //--->>We have also calculated the length of null character
//     }
//     printf("\n");
//     return count;
// }



#include<stdio.h>b
int countLength(char name[]);

int main(){
    char name[100];
    fgets(name, 100 , stdin); //ENTER THE NAME WITHOUT SPACES

    printf("Length is : %d", countLength(name));

    return 0;
}

int countLength(char name[]){
    int count  = 0;
    for(int i = 0; name[i] != '\0'; i ++ ){
        count++;  
    }
    printf("\n");
    return count-1;   //--->>This time correct length
}

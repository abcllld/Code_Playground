#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char numbers[] = "0123456789";
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char symbols[] = "!@#$^&_?";//8
    // char operators[] = "+-*/{}|[]";//9

    srand((unsigned int)(time(NULL)));

    int size;
    printf("Enter the Size of Password : ");
    scanf("%d",&size);

    char password[100];

    for(int i=0;i<size;i++){
        int random_Number = rand()%4;
        if(random_Number == 0){
            random_Number = rand()%10;
            password[i] = numbers[random_Number];;
        }

        else if(random_Number == 1){
            random_Number = rand()%26;
            password[i] = letters[random_Number];
        }

        else if(random_Number == 2){
            random_Number = rand()%26;
            password[i] = LETTERS[random_Number];
        }

        // else if(random_Number == 3){
        //       random_Number = rand()%9;
        //     password[i] = operators[random_Number];
        // }

        else if(random_Number==3){
            random_Number = rand()%8;
            password[i] = symbols[random_Number];
        }
    }


    printf("Your Unique Password is : \n");
    for(int i=0;i<size;i++){
        printf("%c",password[i]);
    }

    return 0;
}
















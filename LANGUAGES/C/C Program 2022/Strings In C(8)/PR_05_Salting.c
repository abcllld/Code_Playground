// SALTING--Write a program to Find the salted form of a password entered by the user if the salt is "123",& add at the end;

// Concept of Salting:--------

// When a password is stored in the company they add their own salts(password) in our password anywhere randomly...So if a hacker got access to the password they will add the password with salt password also which is Invalid


#include<stdio.h>
#include<string.h>
 
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);

    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[] = "123";
    char newpass[200]; 

    strcpy(newpass, password); //newpass = "test"-->which we will enter in line 15
    strcat(newpass, salt);  //newpass = "test" + "123"

    puts(newpass);
}

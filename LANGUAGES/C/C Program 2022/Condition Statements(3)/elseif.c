// It is used to check if (if ) is not true then it check below also


// else if
// if(Condition 1) {
// do something if TRUE
// }
// else if (Condition 2) {
// do something if 1st is FALSE & 2nd is TRUE
// }

//The program terminates as soon the condition evaluates to true




#include<stdio.h>
int main(){
    int age;
    printf("Enter the Age:\n");
    scanf("%d",&age);
    if(age>=18){
    printf("You are disgusting!\n");
    printf("But you are good !\n");
}
    else if(age>15 && age<=20){
    printf("Go and make Aadhar!\n");
    }
    
    else{
    printf("Childhood is the best phase!!!");
    }
    return 0;
}
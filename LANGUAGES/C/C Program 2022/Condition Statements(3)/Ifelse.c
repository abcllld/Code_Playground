// SYNTAX

// if-else
// if(Condition) {
// //do something if TRUE
// }
// else {
// //do something if FALSE
// }

// Else is optional block
// can also work without {}

#include<stdio.h>
int main(){
    int age;
    printf("Enter the Age:\n");
    scanf("%d",&age);
    if(age>=18){
    printf("You can vote!\n");
    printf("You can also Drive!\n");
}
    else{
    printf("You cannot vote\n");
    }

    printf("Thanku for Learning C!");  // This will be always printed
    return 0;


}

//If multiple printf statements are used in if-else then it is preferred to use the { } braces!


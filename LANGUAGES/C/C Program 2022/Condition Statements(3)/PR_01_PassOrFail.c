// A program to check if a student passed or failed

#include<stdio.h>
int main(){
    int marks;
printf("Enter the marks:\n");
scanf("%d",&marks);

if(marks>30 && marks<100){
printf("You are Passed\n");
}
else if(marks<=30){
   printf("You have fail\n");
}
else{
    printf("You have entered the wrong marks:\n");
}

return 0;
}



// With ternary opertor

#include<stdio.h>
int main(){
    int marks;
printf("Enter the marks:\n");
scanf("%d",&marks);

marks>=30 ? printf("PASS\n") : printf("FAIL\n");
}
// This is not helpful in multi- line statements e.g when we write 104 inn the terminal then also it results in PASS bt in reality 104 marks is nor achievable
// But if else has done it above 




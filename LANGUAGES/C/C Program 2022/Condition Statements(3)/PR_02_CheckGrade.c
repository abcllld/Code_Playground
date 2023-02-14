// A program to check the student Students GRADE

#include<stdio.h>
int main(){
    int marks;
printf("Enter the marks:\n");
scanf("%d",&marks);

if(marks<30){
printf("C");
}
if(marks>=30 && marks<70){
printf("B");
}
if(marks>=70 && marks<90){
printf("A");
}
if(marks>=90 && marks<=100){
printf("A+");
}
return 0;
}


// It can be done with else-if also

#include<stdio.h>
int main(){
    int marks;
printf("Enter the marks:\n");
scanf("%d",&marks);

if(marks<30){
printf("C");
}
else if(marks>=30 && marks<70){
printf("B");
}
else if(marks>=70 && marks<90){
printf("A");
}
else{
printf("A+");
}
return 0;
}
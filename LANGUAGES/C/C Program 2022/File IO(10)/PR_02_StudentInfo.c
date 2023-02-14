// Make a program to input student information from a user & enter it to a File.


#include<stdio.h>
int main(){
    FILE *fptr;

    fptr = fopen("practice2.txt","w");
    char name[100];
    int age;
    float cgpa;

    printf("Enter Name:");
    scanf("%s",name); //as name is array so no &************

    printf("Enter Age:");
    scanf("%d",&age); 

    printf("Enter CGPA:");
    scanf("%f",&cgpa); 
    // Now we need to enter all the above information in our file practice2.txt

    fprintf(fptr, "Student Name:%s\n", name);
    fprintf(fptr, "Student Age:%d\n", age);
    fprintf(fptr, "Student CGPA:%f", cgpa);


    fclose(fptr);
    return 0;


}
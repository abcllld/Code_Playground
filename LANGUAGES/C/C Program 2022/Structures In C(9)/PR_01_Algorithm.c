// Write a program to store the data of 3 students



#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;

    s1.roll = 45;
    s1.cgpa = 9.7;
    strcpy(s1.name, "Rahul");


    printf("Students name = %s\n", s1.name);
    printf("Students roll = %d\n", s1.roll);
    printf("Students cgpa = %f\n\n", s1.cgpa);


      struct student s2;

    s2.roll = 25;
    s2.cgpa = 9.4;
    strcpy(s2.name, "Divya");


    printf("Students name = %s\n", s2.name);
    printf("Students roll = %d\n", s2.roll);
    printf("Students cgpa = %f\n\n", s2.cgpa);


      struct student s3;

    s3.roll = 35;
    s3.cgpa = 9.1;
    strcpy(s3.name, "Sharadha");


    printf("Students name = %s\n", s3.name);
    printf("Students roll = %d\n", s3.roll);
    printf("Students cgpa = %f\n", s3.cgpa);
    return 0;

}

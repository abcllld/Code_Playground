// write a program for swapping of the bvalues of two variables using a third variable

#include<stdio.h>
int main(){

int a, b, c;

//Extra var c

printf("Enter the value of a : ");
scanf("%d",&a);

printf("Enter the value of b : ");
scanf("%d",&b);

c = a;
a = b;
b = c;

printf("New value of a = %d\nNew value of b =%d",a, b);
return 0;



}
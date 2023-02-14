#include<stdio.h>
int main()
{
int a, b;

printf("Enter the no a: \n");
scanf("%d", &a);

printf("Enter the no b: \n");
scanf("%d", &b); 

printf("The sum of the no is = %d\n", a+b);
return 0;

}


// OR

#include<stdio.h>
int main()
{
int a, b,sum;

printf("Enter the no a: \n");
scanf("%d", &a);

printf("Enter the no b: \n");
scanf("%d", &b); 

sum = a + b;

printf("The sum of the no is = %d\n",sum);

return 0;

}
#include<stdio.h>

int main(){
int a, b;
printf("Enter two numbers:\n");
scanf("%d%d", &a,&b);
if(a>b){
printf("%d is smallest",b);
}
else{
printf("%d is smallest",a);
}


    return 0;
}
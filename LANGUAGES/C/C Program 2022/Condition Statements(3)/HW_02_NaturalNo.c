//  Write a program to check if the given number is a
// natural number.
// (Natural numbers start from 1)



#include<stdio.h>
int main (){
    int natNo;
    printf("Enter a Number:\n");
    scanf("%d",&natNo);
    if(natNo>0){
        printf("Yes! it is a natural number\n");
    }
    else{
        printf("It is any other number");
    }
        return 0;
    }
// How to deal with this problem---...how to know what to write in if()

//It's all correct but if i enter decimal values then also it shows natural no .... so I need to use one more conditions in if





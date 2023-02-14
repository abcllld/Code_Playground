                    // break Statement

//  It helps to exit the loop


#include<stdio.h>
int main(){

    for (int i = 1; i <= 7; i++){
        if(i==5){
            break;
        }
        printf("%d\n",i);
    }
    printf("This is End!");
    return 0;
}


// /NOTE----->>>> the break exit the nested for loops also, i.e one loop inside other loop
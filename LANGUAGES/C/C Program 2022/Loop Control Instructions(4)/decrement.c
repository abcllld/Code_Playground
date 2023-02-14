// Decrement operator



// There are two types of increment operator

// (1)---->>>>>>  i--(Pre-decrement)

// (2)---->>>>>>  --i(Post-decrement)

#include<stdio.h>
int main(){
    int i =1;


    printf("%d\n", i--);    //use i i.e, 1 will be printed and then decrease its value
     printf("%d\n", i);     //0

     printf("%d\n", --i);   //decrease the value first, then use
     printf("%d\n", i);   // --(i.e 0) is added to make -1 and that -1 is printed because it cannot decrease now as it has been already decreased

    return 0;
}   
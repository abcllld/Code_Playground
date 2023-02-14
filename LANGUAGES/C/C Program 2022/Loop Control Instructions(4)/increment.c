// Increment operator



// There are two types of increment operator

// (1)---->>>>>>  i++(Pre-increment)

// (2)---->>>>>>  ++i(Post-increment)

#include<stdio.h>
int main(){
    int i =1;


    printf("%d\n", i++);    //use i, and then increase its value
     printf("%d\n", i);     //will result in 2

     printf("%d\n", ++i);   //increase the value first, then use
     printf("%d\n", i);   //in 2 ++(i.e 1) is added to make 3 and that three is printed because it cannot increase now as it has been already incraesed

    return 0;
}   
// Create a structure to store vectors. Then make a function to return sum of 2 vectors


#include<stdio.h>
#include<string.h>

struct vector {
    int x;
    int y;


};
void calcSum(struct vector v1, struct vector v2, struct vector sum );

int main(){

    struct vector v1 = {5,9};
    struct vector v2 = {7,4};
    struct vector sum = {}; //Or, struct vector sum = {0};--Same Thing

    calcSum(v1, v2, sum);


    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum ){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of X component is = %d\n", sum.x);
    printf("Sum of Y component is = %d\n", sum.y);

}

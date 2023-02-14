#include<stdio.h>
void _Square(int *n);
int main(){
    int number = 4;
    _Square(&number);
    printf("The value of square is = %d\n",number);  //-----> 16

    return 0;
}
void _Square(int *n){
    *n = (*n) * (*n);
    printf("Square is = %d\n",*n);  //----------> 16
}
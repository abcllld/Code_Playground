// Create a structure to store Complex No (Use arrow Operator)


#include<stdio.h>
#include<string.h>

struct complexNo{
    int real;
    int imaginary;
};

int main(){
    struct complexNo number1 = {8,3};
    struct complexNo *ptr = &number1;
    printf("The Real part = %d\n", ptr->real);
    printf("The Imaginary part = %d\n", ptr->imaginary);

    return 0;


}
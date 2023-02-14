#include<stdio.h>
int main(){

printf("%d\n", 18%4);
//The modular gives remainder
// printf("%d", 18.2%4);

// The modular operator doesn't work on float values

printf("%d\n", +18%4);
// The +ve numerator gives positive remainder

printf("%d\n", -8%3);
// The -ve numerator gives -ve remainder

return 0;

}
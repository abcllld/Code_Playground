// Float stores ------ 4 bytes of data in memo

// Int stores -------2 byte of data in memo

// (1)---int op int ------------It gives int only 

// (2)---float op float ----------It gives float only

// (3)-----int op float----------It gives float 

// Reason for (3)***********
// This is because int stores 2 byte and float stores 4 byte.. So when operation(op) such as + _ * / % is performed then the final container will be small if it int as it can store 2 byte only. so we need a large container such as float


// #include<stdio.h>
// int main(){

// printf("%d\n", 2 * 4);      //--------------This is No (1)

// printf("%f\n", 2.0 * 3.0);    //--------------This is No (2)

// printf("%f\n", 2.0 *4);         //--------------This is No (3)*******
// return 0;

// }

// MORE CASES-----

#include<stdio.h>
int main(){

printf("%d\n", 2 / 3);      //--------------This should be 0.6666.. but the output is 0 because int can't store float values
printf("%d\n", 3/ 2);       //This will be 1 not 1.5

printf("%f\n", 2/3.0);    //--------------This will be 0.666666... as it is float
printf("%d\n", 2 / 3);  //This will be 0

printf("%f\n", 2.0/4.0);         //--------------This will store 0.500000..
printf("%f\n", 4.0/2.0);            //This will be 2.0000 and not only 2

return 0;

}

// THUS, IF WE NEED EXACT ANSWER THEN DO FLOAT OR IF NEED WITHOUT DECIMAL THEN WE NEED INT


#include<stdio.h>
int main(){
    int a = (int) 1.99999999;  
    // Here (int) will  tell the compiler to forece-fully convert int to float(also called) 
    printf("%d",a);
    return 0;

}

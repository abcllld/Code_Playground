// Write a function to convert Celsius to Fahrenheit

#include<stdio.h>
float convertTemp(float celsius);
int main(){
    float far = convertTemp(32);

    printf("The value in fahrenheit is = %f", far);
    return 0;
}
float convertTemp(float celsius){
    float far = (celsius*(9.0/5.0)) + 32;
    return far;


}



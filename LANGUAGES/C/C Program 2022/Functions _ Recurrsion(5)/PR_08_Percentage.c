// Write a function to calculate the percentage of a student fom marks in maths, Physics and Sanskrit;

#include<stdio.h>
float percentage(float maths, float physics, float sanskrit);

int main(){
    int maths = 89, physics = 75, sanskrit = 80;

    printf("The percentage obtained = %f",percentage(maths,physics,sanskrit));

    return 0;

}
float percentage(float maths, float physics, float sanskrit){
    return(((maths+physics+sanskrit)/300)*100);

}

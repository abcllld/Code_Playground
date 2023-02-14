//Write a function to calculate the area of a square, circle and rectangle

#include<stdio.h>
#include<math.h>

float calculateAreaCircle(float radius);
float calculateAreaSquare(float side);
float calculateAreaRectangle(float length, float breadth);


int main (){
    float radius = 4.0, side= 3.0, length = 6.0, breadth = 7.0; 

    calculateAreaCircle(radius);
    // printf("The area of circle is = ", calculateAreaCircle(radius));

    calculateAreaSquare(side);
    // printf("The area of Square is = ", calculateAreaSquare(side));


    calculateAreaRectangle(length, breadth);
    // printf("The area of Rectangle is = ", calculateAreaRectangle(length, breadth));


    return 0;
    }

float calculateAreaCircle(float radius){
    return 3.14*radius*radius;


}

float calculateAreaSquare(float side){
    return side*side;

}

float calculateAreaRectangle(float length, float breadth){
    return length * breadth;
}


// There are some with problem with this code or what??????????







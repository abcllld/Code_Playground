// // Properties
// // - A function gets called directly or indirectly from main 
// // - There can be multiple functions in a program


// // Function Types
// // (1)Library Function--- Special function In built in C
// // (2) User Defined Function------Declared and defined by programmer

// // scanf( ), printf( ) etc..-----Library function



// // Passing Arguments 
// // functions can take value & give some value

// // where;
// // parameter = taken value
// // return value  = Given value;

// void printHello( );  //This has no arguments and will not return anything(as it has void)

// void printTable(int n);   // This hhas arguments int n; but will not return anything

// int sum(int a, int b);   //This ahs arguments as well as it will return some value..It has two arguments int a,and int b . It will take parameter int a and int b... will make its SUM and will return the value to int  


#include<stdio.h>

int sum (int a, int b);
int main(){
    int a,b;
    printf("Enter the 1st Number:");
    scanf("%d",&a);

    printf("Enter the 2nd Number:");

    scanf("%d",&b);

    int s = sum(a,b);
    //Here sum is called ...whatever user enters the value of a and b now will get store in x and respectively 

    printf("The sum of a and b is %d",s);



    return 0;
}

int sum (int x, int y){  //The fun is called from <----sum this time so after calling it will return in sum fun and not in main() function*****.Jo fun jahan se call hota hai wahin pe ake return karta hai
// // We can have written int a, int  b also-- no prob

    return x+y;
//     // here if we have written return 12(Although logically incorrect as x and y both may have 0 value then how it can be 12.. bu tit will not throw error here......);--- CORRECT as return here just needs a int type. But if we have written return 'c
// // ; then it would be wrong
}




// PRINTING THE TABLE

#include<stdio.h>

int sum(int a, int b);
void printTable(int n);  //It is not necessary to give the name HERE as int n only it can be anything int x,y,u,ert,...etc

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    printTable(n); //The var that is passed into the function while calling it is called it ARGUMENTS(actual parameter)--------*******************

    return 0;
}

int sum(int a, int b){
    return a + b;

}
void printTable(int n){ ///Here n is PARAMETER-------------------***************
    for(int i = 1; i<=10; i++){
        printf("%d\n",n*i);

    }

}



                    //  Argument v/s Parameter
// ARGUMENTS--------------//values that are passed in function call    
                        //   used to send value
                        //    Are also called actual parameter





// PARAMETER-------------//values in function declaration definition
                        //  used to receive value
                        //  Are also called Formal parameters


// NOTE---------------************************
// a. Function can only return one value at a time

// b. Changes to parameters in function don't change the values in calling function.
// Because a copy of argument is passed to the function

// Let clear point b with this
// A program to calculate price after including GST

#include<stdio.h>

void calculatePrice(float value);

int main(){

    float value = 100.0;
    calculatePrice(value);

      // If we printf here
      //This value and value below calculatePrice function are different although the variable name is same ... This will give us 100 and below it will be 118

    printf("value here is = %f\n",value);
    return 0;
  
}
void calculatePrice(float value){
    value = value + (0.18*value);
    printf("The final Price is = %f\n:",value);

}

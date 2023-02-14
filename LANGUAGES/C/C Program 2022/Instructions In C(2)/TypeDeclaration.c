#include<stdio.h>
int main(){
    int a=22;
    int b =a;
    int c=b+9;
    int d =1,e;  //Here e has no value assigned
// These are all valid instructions

    int oldAge =98;
    // int newAge= oldAge + years;  //here years is used before declaring
    int years = 76; //Now declared but then also wrong because variables must be declared before it is used

//Assinging multiple values
 
int a=b=c=1;   //here 1 is assigned in c then in b and at last in a
// But this is wrong


int x,y,z;
x=y=z=2;  //This is correct


}




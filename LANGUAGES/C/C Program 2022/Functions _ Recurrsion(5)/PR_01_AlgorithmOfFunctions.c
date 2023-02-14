#include<stdio.h>
void printHello();
void printGoodBye();


int main(){
    printHello();       //step1---First it will come here
    printGoodBye();     //step3---Again it will come here
    printHello();       //step5---- again here
    return 0;           //step6----as return which means main function has ended...
}
void printHello(){      //step2----then here(1)  ///now again here i.e 2 times(5)
printf("Hello\n");      

}
void printGoodBye(){    //step4----now here(3)
printf("Good Bye:)\n");   

}




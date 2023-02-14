// OPERATOR PRECEDENCE

// (1)------* , /, %

// (2)------+ , -

// (3)------=(assignement)

  

// Here first 9*10 and then +4   =========== 94--correct


// ASSOCIATIVITY(for same precedence)

// e.g-------  4*3/6*2
// e.g-------5+2/2*3

// LEFT TO RIGHT

// First 4*3 = 12, 12/6 = 2, 2*2===========4 answer 
// First 5+(2/2) = 5+(1), 5+(1)*3 =================8 answer


#include<stdio.h>
int main(){
    int a = 4*3/6*2;
    int b = 5*2/2*3;
    int c = 5*(2/2)*3;
    int d= 5+2/2*3;
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}




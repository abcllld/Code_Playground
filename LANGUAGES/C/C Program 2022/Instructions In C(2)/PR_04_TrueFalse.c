// PRINT 1(true) AND 0(FALSE) in the given statements;

// (1) If it is sunday and it is snowing---->true

// (2)If it's monday or its raining---->true

// (3)If a two digit number is greater than 9 and less than 100----->true




        //(1)

#include<stdio.h>
int main(){
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSunday==isSnowing);
    
    
    return 0;
}

            // (2)

#include<stdio.h>
int main(){
    int isMonday = 1;
    int isRaining = 1;
    printf("%d\n", isMonday||isRaining);
    
    
    return 0;
}
            

            //(3)

#include<stdio.h>
int main(){
    int g;

    scanf("%d",&g);
    printf("%d\n",(g>9)&&(g<100));
    return 0;
}


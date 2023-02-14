// Swap two numbers a and b

// Method 1 --call by value

// Here we have done swapping using a third variable

#include<stdio.h>
void swap(int a, int b);
int main(){
    int x = 3, y = 5;
    swap(x,y);
    printf("x= %d & y = %d\n",x,y);

    return 0;
}
// Call By Value
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("a = %d & b = %d\n",a,b);
}
// Although the value changes in line 19 which is obvious ...The initial value of  a = 3 and b = 5...Swapping done in Line 19....But But But 

// When we went to main() function the value of x and y are still the same i.e
// a = 5 & b = 3
// x= 3 & y = 5


// Method 2------call by reference

#include<stdio.h>

void _swap(int *a, int *b);
int main(){
    int x = 3 ; int y = 5;
    _swap(&x,&y);
    printf("x = %d & y = %d\n",x,y);

    return 0;

}

// Call By Reference
void _swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
    printf("a =%d & b = %d\n",*a,*b);
}

// Now this is what we got ...Both are changed i.e

// a =5 & b = 3
// x = 5 & y = 3



// Conclusion = Whenever we need to return multiple values then we use pointer with call by reference

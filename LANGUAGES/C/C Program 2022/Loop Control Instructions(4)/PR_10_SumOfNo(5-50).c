// Calculate th SUM of all the numbers between 5 and 50(including 5 & 50)

#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 5; i<=50; i++){
        sum = sum + i;
    }
        printf("The sum of the number is = %d\n", sum);

return 0;
}
// Find the sum of first n Natural Numbers


// sum n = 1+2+3+4+5+.....+(n-1)+n
// 
// sum 5 =1+2+3+4+5----->sum(4)+5 i.e sum(n-1)+n
// 
// sum 3 = 1+2+3----->sum(2)+3
// 
// sum 2 =1+2----->sum(1)+2
// 
// sum 1 =1------>sum(1)

// /All these function are calling itself



#include<stdio.h>
int sum(int n);
int main(){
    printf("The sum is = %d", sum(4));
        return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sum1Ton = sum(n-1); //sum1Ton= sum of 1 to n
    int sumN = sum1Ton + n;
    return sumN;
}

// sum 5 = 1+2+3+4+5 ===================15

// sum(5)------>>> Ne socha sum(4) nikal lun aur 5 add kad dun i.e-sum(4)+5;
// sum(4)------>>> Ne socha sum(3) nikal lun aur 4 add kad dun i.e-sum(3)+4;
// sum(3)------>>> Ne socha sum(2) nikal lun aur 3 add kad dun i.e-sum(2)+3;
// sum(2)------>>> Ne socha sum(1) nikal lun aur 2 add kad dun i.e-sum(1)+2; //This is BASE CASE i.e our recursion STOPS here

// /This is recursion




// Write a function to calculate the numbers of odd numbers in an array 

#include<stdio.h>
int countOdd(int arr[], int n);
int main(){
    int arr[] = {2,3,9,5,4,7};
    
    printf("Odd Numbers are : %d",countOdd(arr, 6) );
    return 0;
}

int countOdd(int arr[], int n){
    int count  = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){ //Odd
            count++;
        }
    }
    return count;
}

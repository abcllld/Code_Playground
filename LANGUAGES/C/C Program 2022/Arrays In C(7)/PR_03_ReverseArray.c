// Write a function to reverse an array

// NOTE:- A classical way to reverse an array is to change the 1st with lats..2nd with last 2nd..third with last third....and so on

// First reverse half of the array

// Use the formula of ***************(n-i-1)***********

/*                i  |    n-i-1   
                     | 
                     |
                0    |       6-0-1 = 5
                           
                1    |       6-1-1 = 4
                           
                2    |       6-2-1 = 3                                         */

                // we assume a array of 6

// 1st term-------> 5
// 2nd term-------> 4
// 3rd term-------> 3

// If there is 5 term array then also no problem the first 2 and lats 2 terms will exchange with each other and the middle one i.e three in our case will remain same


#include<stdio.h>
void reverseArr(int arr[], int n);

void printArr(int arr[], int n);

int main(){
     int arr[] = {1, 2, 3, 4, 5};

     reverseArr(arr, 5);

     printArr(arr, 5);


     return 0;
}



void reverseArr(int arr[], int n){
     for(int i = 0; i< n/2; i++){
          int firstValue = arr[i];
          int secondValue = arr[n-i-1];
          arr[i] = secondValue;
          arr[n-i-1] = firstValue;

     }

}

void printArr(int arr[], int n){
     for(int i = 0; i<n; i++){
          printf("%d\t",arr[i]);
     }
     printf("\n");


}








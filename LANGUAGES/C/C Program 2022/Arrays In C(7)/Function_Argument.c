// Arrays as Function Argument


// //Function Declaration

// void printNumbers (int arr[ ], int n) 

                // OR

// void printNumbers (int *arr, int n) 

// //Function Call
// printNumbers(arr, n); 


#include<stdio.h>
void printNumbers(int arr[], int n);
int main(){
    int arr[6] = {1,2,3,4,5,6};
    printNumbers(arr, 6);

    return 0;
}

void printNumbers(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }

}


// As array is a pointer so we can so..........




#include<stdio.h>
void printNumbers(int *arr, int n);
int main(){
    int arr[6] = {1,2,3,4,5,6};
    printNumbers(arr, 6);

    return 0;
}

void printNumbers(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }

}

// Both will give the same output



// ------******Either use a square bracket([]) or a pointer(*)*****---------


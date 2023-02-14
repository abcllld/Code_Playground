// Create a 2-D array storing the table of 2 and 3



#include<stdio.h>

void storeTable(int arr[][10], int n, int m,  int numbers); //m =row; n = coulmn;

int main(){
    int tables[2][10]; //Means there are two tables each having size i. terms of 10
    storeTable(tables, 0, 10, 2); //means 0th row; 10th column; and 2 ka table 
    storeTable(tables, 1, 10, 3);


    for(int i = 0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }
    printf("\n");


    for(int i = 0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }
    return 0;

}
void storeTable(int arr[][10], int n, int m, int numbers){ //0 to 10;
    for(int i = 0; i<m; i++){
    arr[n][i] = numbers * (i + 1);    //this will be 2 * (i+1)= 2*(0+1) =2, then 4 then 6...so on...And then it will go to the table no 3 and print it in the similar way 

    // The row will be constant and column keep on varying i.e arr[0][0], arr[0][1], arr[0][2]...

    // And arr[1][0], arr[1][1], arr[1][2]..so on in case og three

    // Basically n takes row and m takes column
        }
}


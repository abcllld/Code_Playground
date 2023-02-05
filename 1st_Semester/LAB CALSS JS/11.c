#include<stdio.h>

int main(){
    int arr1[100][100], arr2[100][100],sum[100][100];
    int i, j , n;

    printf("Enter size of matrix : ");
    scanf("%d",&n);


    printf("\n\n");


    printf("Input element of first matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Element [%d][%d] = ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("The elements  of the first matrix is : \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",arr1[i][j]);
        }
    }


printf("\n\n");


    printf("Input the element of the second matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Element [%d][%d] = ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }


    printf("The elements of second matrix is : \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",arr2[i][j]);
        }
    }

    printf("\n\n");
    // addition : 

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j] = arr1[i][j]  + arr2[i][j]; 
        }
    } 

    printf("The addition of the two matrix is : \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",sum[i][j]);
        }
    }
}

#include<stdio.h>

int main(){

    int i,n, marks[100],count=0;

    printf("Enter the No of Students : ");
    scanf("%d",&n);


    printf("Enter the marks of %d Students: ",n);

    for(i=0; i<n; i++){
        scanf("%d",&marks[i]);
    }

    for(i=0;i<n;i++){

        if(marks[i]>60)
        {
            count++;
        }
    }

printf("%d Students secured marks more than 60",count);

}
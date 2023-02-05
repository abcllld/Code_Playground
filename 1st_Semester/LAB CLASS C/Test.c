// #include<stdio.h>
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }

//     else{
//         return (fibonacci(n-1)+fibonacci(n-2));
//     }
// }

// int main(){
// int i,j=0,n;
// printf("FIBONACCI SERIES : \n");
// printf("How many terms do you want  : ");
// scanf("%d",&n);

// for(i=1;i<=n;i++){
//     printf("%d\t",fibonacci(j));
//     j++;
// }
// }


// #include<stdio.h>
// int factorial(int);
// int main(){
//     int n;
//     printf("Enter any Number : ");
//     scanf("%d",&n);
// if(n<0){
// printf("Error!!!!!!!!");
// }
// else{
//     printf("The factorial of %d = %d",n,factorial(n));
// }

// }

// int factorial(int n){
//     if(n==1 || n==0){
//         return 1;
//     }

//     else{
//         return (n*factorial(n-1));
//     }
// }


// #include<stdio.h>
// int fibonacci(int n);
// int main(){
// int n;
// printf("Enter the no of terms : ");
// scanf("%d",&n);
// printf("%d\t",fibonacci(n));
// }
// int fibonacci(int n){
//     int first=0,second=1,next,i;
//     printf("First %d terms of the fibonacci series are : \n",n);

//     for(i=0;i<=n;i++){
//         if(i<=1){
//             next = i;
//         }

//         else{
//             next = first + second;
//             first= second;
//             second = next;
//         }

//         printf("%d\t",next);
//     }
// }


// #include<stdio.h>
// int factorial(int);
// int main(){
// int n;
// printf("Enter then no of terms : ");
// scanf("%d",&n);
// if(n<0){
//     printf("Error!!!!!!!!!!!!!!!!!!");
// }
// else{
//     printf("Factorial of %d = %d ",n,factorial(n));
// }
// }
// int factorial(int n){
//     int i,fact=1;
//     for(i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     return fact;
// }


// #include<stdio.h>
// int main(){
// int r,c,m1[100][100], m2[100][100], sum[100][100], i,j;
// printf("Enter the no of rows and columns : ");
// scanf("%d%d",&r,&c);

// printf("\n\n");
// printf("Input the elements of the first Matrix : \n");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         printf("Element [%d][%d] = ",i+1,j+1);
//         scanf("%d",&m1[i][j]);
//     }
// }

// printf("\n");

// printf("The Element of the first matrix is : ");
// for(i=0;i<r;i++){
//     printf("\n\n");
//     for(j=0;j<c;j++){
//         printf("%d\t",m1[i][j]);
//     }
// }

// printf("\n\n");
// printf("Input the element of the second matrix : \n");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         printf("Element [%d][%d] = ",i+1,j+1);
//         scanf("%d",&m2[i][j]);
//     }
// }

// printf("\n");
// printf("The element of the second matrix is : ");
// for(i=0;i<r;i++){
//     printf("\n\n");
//     for(j=0;j<r;j++){
//         printf("%d\t",m2[i][j]);
//     }
// }

// //sum:
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         sum[i][j] = m1[i][j] + m2[i][j];
//     }
// }

// printf("\n\n");
// printf("The Sum of the Matrix is : ");
// for(i=0;i<r;i++){
//     printf("\n\n");
//     for(j=0;j<c;j++){
//         printf("%d\t",sum[i][j]);
//     }
// }
// }


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enetr a : ");
//     scanf("%d",&a);

//     printf("Enetr b : ");
//     scanf("%d",&b);
//     printf("Enetr c : ");
//     scanf("%d",&c);

//     if(a>b){
//         if(a>c){
//             printf("%d is largest",a);
//         }
//         else{
//             printf("%d is largest",c);
//         }
//     }

//     else{
//         if(b>c){
//             printf("%d is largest",b);
//         }
//         else{
//             printf("%d is largest",c);
//         }
//     }
// }            


// #include<stdio.h>
// int main(){
//     int n,i,count=0;
//     printf("Enter n : ");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }

//     if(count==2){
//         printf("%d is Prime\n",n);
//     }
//     else{
//         printf("%d is not Prime\n",n);
//     }
// }


// #include<stdio.h>
// int main(){
// int n,rem,rev=0;
// printf("Enter n : ");
// scanf("%d",&n);

// while(n!=0){
//     rem = n % 10;
//     rev = rev*10 + rem;
//     n = n /10;
// }
// printf("Reverse  =  %d ",rev);
// }


// #include<stdio.h>
// int main(){
//     int n,i,marks[100],count=0;
//     printf("Enter no of students : ");
//     scanf("%d",&n);

//     printf("Enter the marks of %d students : \n",n);
//     for(i=0;i<n;i++){
//         printf("Marks of %d = ",i+1);
//         scanf("%d",&marks[i]);
//     }

//     for(i=0;i<n;i++){
//         if(marks[i]>60){
//             count++;
//         }
//     }

//     printf("%d students scored more than 60 marks",count);

// }


// #include<stdio.h>
// int main(){
//     int n,i,marks[100],sum=0;
//     float avg;

//     printf("Enter the no : ");
//     scanf("%d",&n);

//     printf("The marks are : \n");
//     for(i=0;i<n;i++){
//         printf("Enter marks %d = ",i+1);
//         scanf("%d",&marks[i]);
//         sum  =  sum +  marks[i];
//     }

//     avg = sum/n;
//     printf("Average = %f",avg);
// }


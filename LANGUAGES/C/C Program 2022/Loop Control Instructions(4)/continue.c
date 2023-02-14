                    // continue Statement


// skip to next iteration
#include<stdio.h>
int main(){
    for(int i=1; i<=8;i++){
        if(i==4){
            continue;  //Except no 4 it will print all values
        }
        printf("%d\n",i);
    }
    return 0;
}
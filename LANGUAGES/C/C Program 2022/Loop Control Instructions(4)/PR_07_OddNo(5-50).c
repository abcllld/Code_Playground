// Print all the ODD no from 5 to 50;

#include<stdio.h>
int main(){
    printf("The ODD no's are:\n");
    for(int i =5; i<=50;i++){
        if(i%2==0){
            continue;
        }
        // if(i/2<1){
        //     break;
        // }
        printf("%d\n",i);
    }
    return 0;
}

// OR

#include<stdio.h>
int main(){
    printf("The ODD no's are:\n");
    for(int i =5; i<=50;i++){
        if(i%2!=0){
        printf("%d\n",i);

        }
    }
    return 0;
}


// While loop
#include<stdio.h>
int main(){
    printf("The ODD no's are:\n");
    int i =5;
    while(i<=50){
        if(i%2!=0){
            continue;
        }
      
    }
      printf("%d\n",i);
        i++;
}
// /This doesn't Work

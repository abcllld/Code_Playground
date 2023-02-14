                    // for Loop

// for(initialisation; condition; updation) {

//do something

// }

#include<stdio.h>
int main(){
    // for(int i = 0; i<=6; i = i +1 ){ //here 7 times printed 
        // or
        for(int i = 1; i<=6; i = i +1 ){  ///here excatly 6 times
        printf("Hello World\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
for(int i =1; i<=10; i=i+1){
    printf("%d\n",i);
}

    return 0;
}




#include<stdio.h>
int main(){
for(int i =10; i>=1; i=i-1){
    printf("%d\n",i);
}

    return 0;
}
//this will start from 10 and keep on decreasing the value till it becomes 1


// ---------->>>>>> As i is mostly use , it is also called iterator or counter variable 


// ----------->> Loop counter can be float or even character

#include<stdio.h>
int main(){
for(float i =1.0; i<=10.0; i=i+1){
    printf("%f\n",i);
}

    return 0;
}



#include<stdio.h>
int main(){
for(char ch ='A';ch<='Z';ch++){
    printf("%c\n",ch);
}

    return 0;
}


// Infinite Loop--------------------------->>>> It keeps on printing until the memory gets full and program crashes

#include<stdio.h>
int main(){
for(int i =1; ; i=i+1){
    printf("%d\n",i);
}

    return 0;
}



// ARE THE FOLLOWING VALID OR NOT


// (1)
#include<stdio.h>
int main(){
    int a = 8^8;  //it is not power, it it bitwise fun
    printf("%d",a);
    
    return 0;
}
// This is valid...........

// (2)
#include<stdio.h>
int main(){
    int a; int b = a;
    printf("%d",b);
    
    return 0;
}
// This is valid


// (3)
#include<stdio.h>
int main(){
    // int a, int a=b;   
    // printf("%d",a);
    
    return 0;
}
// This is invalid



// (4)
#include<stdio.h>
int main(){
    // char game = "**";  
    // printf("%d",game);
    
    return 0;
}
// This is also invalid as char cannot store 2 character at a time as it has only 2 byte of memo

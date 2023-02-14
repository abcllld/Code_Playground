

                // Conditional Operators()



// (1) Ternary---------------------------------------------->


// Condition ? doSomething if TRUE : doSomething if FALSE;


#include<stdio.h>
int main(){
    int age;
    printf("Enter the Age:\n");
    scanf("%d",&age);

    age>=18 ? printf("You can vote\n") : printf("You can;t vote");

}

// Note that it is used only when we have to print the single line 






// (2) switch----------------------------------------------->>


// switch(number) {
// case C1: //do something
    // break;

// case C2 : //do something
    // break;

// default : //do something
// }


#include<stdio.h>
int main(){
    int day;  //1-mon, 2- tue, ......so on....
    printf("Enter the Day(1-7):\n");
    scanf("%d",&day);

    switch (day)
    {
    case 1:printf("Today is Monday\n");
                break;
    case 2:printf("Today is Tuesday\n");
                break;
    case 3:printf("Today is Wednesday\n");
                break;
    case 4:printf("Today is Thrusday\n");
                break;
    case 5:printf("Today is Friday\n");
                break;
    case 6:printf("Today is Saturday\n");
                break;
    case 7:printf("Today is Sunday\n");
                break;
    
    default:("Today is Holiday:):)");

    return 0;
    }
}





// IF BREAK HAD NOT BEEN USED

// #include<stdio.h>
// int main(){
//     int day;  //1-mon, 2- tue, ......so on....
//     printf("Enter the Day(1-7):\n");
//     scanf("%d",&day);

//     switch (day)
//     {
//     case 1:printf("Today is Monday\n");
//                 break;
//     case 2:printf("Today is Tuesday\n");
//                 break;
//     case 3:printf("Today is Wednesday\n");
//                 break;
//     case 4:printf("Today is Thrusday\n");
//                 break;
//     case 5:printf("Today is Friday\n");
//                 break;
//     case 6:printf("Today is Saturday\n");
//                 break;
//     case 7:printf("Today is Sunday\n");
//                 break;
    
//     default:("Today is Holiday:):)");

//      return 0;
//     }
// }
// iN THIS TYPE 3 ...AFTER 3 ALL DAY WILL BE PRINTED INCLUDING 3 I.E WED, THU, FRI..... HOLI...




//Let us perform switch with character------------>>

#include<stdio.h>
int main(){
    char day;  //m-mon, t- tue, ......so on....
    printf("Enter the Day(1-7):\n");
    scanf("%",&day);

    switch (day)
    {
    case 'm':printf("Today is Monday\n");
              break;
    case 't':printf("Today is Tuesday\n");
              break;
    case 'w':printf("Today is Wednesday\n");
              break;
    case 'T':printf("Today is Thrusday\n");
              break;
    case 'f':printf("Today is Friday\n");
              break;
    case 's':printf("Today is Saturday\n");
              break;
    case 'S':printf("Today is Sunday\n");
                break;
    
    default:("Today is Holiday:):)");

return 0;
    }
}

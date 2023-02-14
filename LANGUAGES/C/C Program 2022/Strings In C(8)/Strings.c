// Strings---

// A character array terminated by a '\0' (null character)
// null character denotes string termination

// EXAMPLE
// char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};-----This is SHRADHA
                                        // OR
// char name[] = "SHRADHA";---The c compiler automatically puts the null character here '\0'.....


// char class[ ] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};---APNA COLLEGE
                                        // OR
// char class[] = "APNA COLLEGE";

// NOTE:- The difference between strings and character is between (') & ("")




// What Happens in Memory?

// char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};
// char name[ ] = "SHRADHA";
   
// a Character name is created to store 

// each charater takes a byte of storage with a unique address

// e.g
// 2003--------It will store S
// 2005--------It will store H
// 2006--------It will store R
// 2008--------It will store A
// 2002--------It will store D
// 2009--------It will store H
// 2004--------It will store A

// and also te 0 null character also takes the unique address 
// 2007-------It will store \0






// String Format Specifier

//   ===================>>>> "%s"
// char name[ ] = "Shradha";
// printf("%s", name);

// Directly print hre string

#include<stdio.h>
int main(){
    char name[50];
    printf("Enter your Name:");
    scanf("%s", name);
    printf("Your name is: %s",name);
}

// As we enter the "%s", the compiler itself takes the backslash'\'

// String using Pointers

// **Since array is a pointer , and string is array...So string is pointer**

// char *str = "Hello World";

//-->> The above Stores string in memory & the assigned address is stored in the char pointer 'str' 

// char *str = "Hello World";   //can be reinitialized if pointer notation is used . e.g

#include<stdio.h>
int main(){
    char *canChange = "Hello World"; 
    puts(canChange);

    canChange = "Hello Duniya";
    puts(canChange);

    return 0;
}



// char str[ ] = "Hello World"; //cannot be reinitialized if array notation is used

#include<stdio.h>
int main(){
    char cannotChange[] = "Hello World"; 
    puts(cannotChange);

    // cannotChange = "Hello Duniya"

    // NOTE:-This cannot be done as ARRAY CANNOT BE MODIFIED

    return 0;
}



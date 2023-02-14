// Functions are block of code that performs particular task

// it can be used multiple times
// increase code reusability

// Take Argument------->>>>>Do Work--------->>>>>>>Return Result

// Syntax 1

// Function Prototype------>With this prototype we are telling to the compiler that we are declaring a function
// This tells the compiler that a function EXISTS

void printHello( );  //<<-----prototype
// Here void means it will return nothing..In place of VOID return-type is written but as it has no written type so void is written 

// Syntax 2

// Function Definition----It tells the compiler to do the work

void printHello() {
printf("Hello");
}


// Syntax 3

// Function Call----->>Use the Work

int main() {
printHello( );
return 0;
}

// Note that above main() and printHello( ); both are functions . main() has return type as int...But main() is a pre-defined function called keywords.. we will make our own functions such as printHello( );









// Problem

// You are given that a mango weighs XX kilograms and a truck weighs YY kilograms. You want to cross a bridge that can withstand a weight of ZZ kilograms.

// Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.
// Input Format

//     First line will contain TT, the number of test cases. Then the test cases follow.
//     Each test case consists of a single line of input, three integers X,Y,ZX,Y,Z - the weight of mango, the weight of truck and the weight the bridge can withstand respectively.

// Output Format

// For each test case, output in a single line the maximum number of mangoes that you can load in the truck.
// Constraints

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    
	    printf("%d\n",(z-y)/x);
	}
	return 0;
}


// Problem

// A participant can make 11 submission every 3030 seconds. If a contest lasts for XX minutes, what is the maximum number of submissions that the participant can make during it?

// It is also given that the participant cannot make any submission in the last 55 seconds of the contest.
// Input Format

//     The first line of input will contain a single integer TT, denoting the number of test cases.
//     Each test case consists of a single integer XX, denoting the number of minutes.

// Output Format

// For each test case, output the maximum number of submissions a participant can make in XX minutes.

#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    int x;
	    scanf("%d",&x);
	        
	    
	    if(((x*60)/30)<=5){ //Condition == ?
	        
	        printf("0");
	    }
	    else{
	        
	         printf("%d\n",(x*60)/30);
	    }
	    
	}
	return 0;
}


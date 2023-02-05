// Problem

// Chef wants to give a burger party to all his NNN friends i.e. he wants to buy one burger for each of his friends.

// The cost of each burger is XXX rupees while Chef has a total of KKK rupees.

// Determine whether he has enough money to buy a burger for each of his friends or not.

#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    int n,x,k;
	    scanf("%d%d%d",&n,&x,&k);
	    
	    if((n*x)<=k){
	        
	        printf("YES\n");
	    }
	    
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}


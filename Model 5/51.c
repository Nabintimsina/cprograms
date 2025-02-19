//WAP to display following pattern using nested loop.
//1 2 3 4 3 2 1
//  1 2 3 2 1
// 	  1 2 1
//	    1
//Explain the characteristic of Array in c-programming.



#include<stdio.h>


void main(){
	
	int i, j, space, n=4;
	
	
	for(i=0; i<n; i++){
		
		for(space=0; space<i; space++){
			printf(" ");
		}
		
		for(j=1; j<=n-i; j++){
			
				printf("%d", j);
			
		}
		
		for(j=n-i-1; j>=1; j--){
			printf("%d", j);
		}
		
		printf("\n");
		
		
	}
	
}
//C. Evaluate x y
//
//using recursion and without using pow() function,
//
//where x and y are positive integers.


#include<stdio.h>


void main(){
	
	int x, y, i, pro =1;
	
	printf("Enter the value of x and y : ");
	scanf("%d %d", &x , &y);
	
	
	for(i = 1; i<=y; i++){
		
		pro = pro*x;
		
	}
	
	printf("Result is %d", pro);
	
	
	
}



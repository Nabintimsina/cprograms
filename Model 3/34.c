//C. Evaluate x y
//
//using recursion and without using pow() function,
//
//where x and y are positive integers.


#include<stdio.h>


int pow(int x , int y ){
	
	if(y==1){
		return x;
	
	}
	else
		return x*pow(x, y-1);
}

void main(){
	
	int x, y, result;
	
	printf("Enter the value of x and y : ");
	scanf("%d %d", &x , &y);
	
	
	result = pow(x, y);
	
	printf("Result is %d", result);
	
	
	
}



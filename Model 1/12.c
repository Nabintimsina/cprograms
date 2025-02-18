//Write a necessity condition for Recursion. Write a program to calculate the sum of the
//series: 1+11+111+........+up to N terms using recursive function. If N is read as 5, the series
//is: 1+11+111+1111+11111.


#include<stdio.h>

int Term(int n){
	
	if(n==1)
		return 1;
		
	else
		return Term(n-1)*10+1;
	
	
}
int Sum( int n ){
	
	if(n==1)
		return 1;
	
	else
		return Term(n)+ Sum(n-1);
	
	
}



void main(){
	
	
	int n;
	
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	printf("The sum is %d ", Sum(n));
}


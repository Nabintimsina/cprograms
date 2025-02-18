//WAP to check if given number is prime or not using
//recursion.


#include<stdio.h>


int Prime(int n, int i){
	
	if(i ==0)
		return 0;
		
	else if (i==1)
		return 1;
		
	else if( n%i==0)
		return 0;
		
	else
		Prime(n, i-1);
}


void main(){
	int n;
	
	printf("Enter the numbet to check :");
	scanf("%d", &n);
	
	if(Prime(n, n/2)){
		printf("The number is prime ");
		
	}
	else
		printf("The number is not prime ");
}
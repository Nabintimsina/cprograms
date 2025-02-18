//Write a c program to check whether the given
//number is prime or not using the concept of goto statement.


#include<stdio.h>

void main(){
	
	int n, i;
	
	
	printf("Enter the number to check :  ");
	scanf("%d", &n);
	
	
	if(n< 2 )
		printf("The number is not prime . ");
		
	
	i = 2;
		
	check : 
		
		if(n%i==0){
		
			printf("NUmber is not prime : ");
			goto  end;
			
		}
		
		i++;
		
		if(i <= n/2)
			goto check;
			
	
	printf("Number is prime ");	
	
	end:
		
		
		
	
}
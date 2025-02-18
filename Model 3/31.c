//C. WAP to check if given number is strong or not.
//[Hint: a number is strong number if the sum of factorial of digits of given integer is equal
//to that number. Eg. 145 is strong number. It means 1! + 4! + 5! = 145.


#include<stdio.h>



int fact (int );


void main(){
	
	int number, rem , strong = 0, temp;
	
	printf("Enter the number to check : ");
	scanf("%d", &number);
	
	temp  = number;
	while(number != 0){
		rem = number %10;
		
		strong += fact(rem);
		number = number /10;
	}
	if(temp == strong)
		printf("strong");
		
	else
		printf("not strong ");
	
}

int fact (int n ){
	
	int f = 1, i;
	
	for(i=1; i<= n; i++){
		f = f*i;
	}
	
	return f;
}
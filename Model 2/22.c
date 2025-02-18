//WAP to reverse a number entered by user using the
//concept of function with return type argument.

#include<stdio.h>

int  Reverse (int );

void main(){
	
	
	int n;
	
	
	printf("Enter the number to reverse : ");
	scanf("%d", &n);
	
	printf("The reversed number is %d", Reverse(n));


}

int Reverse(int n){
	
	int rem, rev = 0;
	
	while(n != 0){
		
		rem = n% 10;
		rev = rev*10+ rem;
		
		n = n/10;
	}
	
	return rev;
}
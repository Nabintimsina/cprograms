//WAP to convert decimal numbers to its
//equivalent binary numbers.


#include<stdio.h>

void main(){
	
	int binary=0, n,rem, i = 1;
	
	printf("Enter the numbet to convert: ") ;
	scanf("%d", &n);
	
	
	while(n!= 0){
		rem = n% 2;
		binary = binary + rem*i;
		i= i*10;
		n= n/2;
	}
	
	printf("Binary is %d", binary);
}
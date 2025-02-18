//Define a bad pointer. WAP to swap values of two variables using function call by
//reference.

#include<stdio.h>

void Swap( int *, int *);


void main(){
	
	int a, b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a , &b);
	
	printf("Before Swap: a : %d and b : %d ", a,b);
	Swap(&a,&b);
	
	printf("After Swap a : %d b : %d ", a,b);
}

void Swap(int* a, int *b){
	
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
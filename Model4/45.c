//WAP to create structure named Complex
//with its member real and img. Use this structure to read to complex number and multiply
//them using function Product (). Read two complex number in main (), perform the
//complex number multiplication in function Product () and finally display the result from
//calling fuction.


#include<stdio.h>

struct Complex{
	
	int real;
	int img;
	
	
};

struct Complex Product(struct Complex c1 , struct Complex c2){
	
	struct Complex result;
	
	result.real = ( c1.real* c2.real ) - (c1.img * c2.img);
	result.img = (c1.real * c2.img) + (c2.real * c1.img);
	
	return result;
};

void main(){
	
	struct Complex c1, c2, result;
	
	printf("Enter first complex number : ");
	scanf("%d %d", &c1.real , &c1.img);
	
	
	printf("Enter second complex number : ");
	scanf("%d %d", &c2.real , &c2.img);
	
	
	result = Product( c1, c2);
	
	printf("The Reulst is %d + %di", result.real, result.img);
}
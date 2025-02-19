//WAP to find max and min value between two
//integer number entered by user using function findMinMax(). Your program should ask
//two integer from main () function, pass it to function findMinMax() which finds maximum
//and minimum value and display the result from calling function.


#include<stdio.h>

int findMinMax(int a, int b, int *max, int *min){
	
	if(a>b){
	
		*max = a;
		*min = b;
		
}
		
	else{
	
		*max = b;
		*min = a;
	}
	
	
}

void main(){
	
	int a, b, min , max;
	
	printf("Enter the two numbers : ");
	scanf("%d%d", &a,&b );
	
	findMinMax(a,b,&max , &min);
	
	printf("Max is %d and min is %d", max, min);
}
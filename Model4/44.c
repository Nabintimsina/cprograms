//WAP to read n numbers in array and sort them in ascending order using pointer notation.


#include<stdio.h>


void main(){
	
	int a[100], n, i, j, temp;
	
	
	printf("Enter the value of N : ");
	scanf("%d", &n);
	
	printf("Enter the elements of array : ");
	for(i= 0; i< n; i++){
		
		scanf("%d", a+i);
		
	}
	
	for(i= 0; i < n ; i++){
		
		
		for(j = 0; j< n; j++){
			
			if(*(a+i)< *(a+j)){
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;

				
			}
			
		}
		
	}
	
	
for( i = 0; i< n ; i++){
	

		
		printf("%d\t", *(a+i));
		
}
	
	
	
	
}
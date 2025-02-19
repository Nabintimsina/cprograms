//WAP to read n elements in array and read another integer elements and check if that
//integer element is present in that array or not.


#include<stdio.h>

void main(){
	
	
	int a[100], n , num, i, count=0;
	
	printf("Enter the no of elements of array : ");
	scanf("%d", &n);
	
	printf("Enter the elements : ");
	for(i=0; i<n; i++){
		
		scanf("%d", &a[i]);
	}
	
	printf("\n\nEnter the number to check : ");
	scanf("%d", &num);
	
	for(i=0; i<n; i++){
		
		if(num== a[i]){
			count++;
			
			
		}
	}
	if(count == 0)
		printf("The number is not present in array ");
	else{
		printf("Nunmber is present in array %d times \n",count );
	}
	
	
}
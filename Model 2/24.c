//4. WAP to read values of 1D Arrays and check whether the largest
//element is even or odd.


#include<stdio.h>

void main(){
	
	int max, a[100], i,n;
	
	printf("Enter the no of elements of array : ");
	scanf("%d", &n);
	
	
	printf("Enter the elements : ");
	for(i= 0; i<n ; i++){
		
		scanf("%d", &a[i]);
	}
	
	max = a[0];
	for(i = 0; i< n ; i++){
		
		if(a[i]> a[0])
			max  = a[i];
			
	}
	
	if(max % 2 ==0 )
		printf("The max is %d and it is even .", max);
	
	else
		printf("The max is %d and it is odd.", max);
}
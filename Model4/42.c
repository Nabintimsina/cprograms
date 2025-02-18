//WAP to read valued of matrix NxN and find the
//maximum value from the principle diagonal element.


#include<stdio.h>

void main(){
	
	int a[10][10], max, i, j, n;
	
	printf("Enter the value of n for n*n");
	scanf("%d", &n);
	
	
	printf("Enter the elements of matrix : ");
	for(i= 0;i<n; i++){
		for(j = 0; j< n; j++){
			
			scanf("%d", &a[i][j]);
			
		}
	}
	
	
	max = a[0][0];
	for(i= 0;i<n; i++){
	for(j = 0; j< n; j++){
		
		
		if(i== j){
			
			if(a[i][j] > max)
				max = a[i][j];
		}
			
		
			}
	
	}
		
		


printf("Max is %d ", max);

}
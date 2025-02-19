//WAP to read a m x n order matrix, find the
//largest element of each row of that matrix and store these largest elements of each row of
//matrix in 1D array

#include<stdio.h>

void main(){
	
	int n, m, a[10][10], b[10], max, i, j;
	
	printf("Enter the order m*n ");
	scanf("%d%d", &m, &n);
	
	printf("Enter the elements of matrix : ");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			
			scanf("%d", &a[i][j]);
			
		}
	}
	
	for(i=0; i<m; i++){
		max = a[i][0];
		
		for(j=0; j<n; j++){
			
			if(a[i][j]> max){
				max = a[i][j];
			
			}
			
		}
			b[i] = max;
	}
	
	
	
	printf("the Largest elements are : ");
	for(i=0; i<m; i++){
		printf("%d\t", b[i]);
	}
	
	
}

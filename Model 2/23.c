//3. Display the following pattern using the concept of nested loop in C
//5
//54
//543
//5432
//54321

#include<stdio.h>
void main(){
	
	int i, j ,n = 5;
	
	for(i=1 ; i<= n; i++){
		
		for(j= 1;j<=n  ; j++){
			
			if(i>=j)
				printf("%d\t", n-j+1);
			
		
		}
		printf("\n");
	}
}
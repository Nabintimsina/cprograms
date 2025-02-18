//sin series sum 

#include<stdio.h>
#include<math.h>

int fact(int n){
	int f=1, i;
	
	for(i=1; i<=n; i++){
		f*= i;
	}
	return f ;
}

void main(){
	
	float n, term, x, i, sum = 0, k = 0;
	
	printf("Enter the value of x and n : ");
	scanf("%f%f", &x , &n);
	
	for(i= 1; i<=n*2; i=i+2){
		
		term = (1.0/fact(i))*pow(x, i) * pow(-1, k);
		printf("%d\t", term);
		
		sum  += term;
		k++;
	}
	
	printf("Sum is %f", sum);
}
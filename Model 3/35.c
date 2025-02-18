//WAP t create a structure named Book with its member name and price. Use this structure
//to read the information of n number of books. Create a function named maxPrice() which
//display the record with maximum price. The entire structure is passed to a function from
//main.



#include<stdio.h>

struct Book{
	
	int price;
	
	char name[20];
	
};

 struct Book maxPrice(struct Book a[], int n){
	
	
	int max, i;
	struct Book maximum;
	
	max = a[0].price;
	
	for(i= 0; i<n ; i++){
		
		if(a[i].price > max)
			maximum = a[i];
	}
	
	return maximum;
	
}


void main(){
	
	
	int n, i;
	
	struct Book b[20], max;
	
	
	printf("Enter the number of books: ");
	scanf("%d", &n);
	
	printf("Enter the details of book : ");
	
	for(i=0 ; i<n; i++){
		
		fflush(stdin);
		printf("Name : ")	;
		gets(b[i].name);
		
		printf("Price  : ");
		scanf("%d", &b[i].price);
		
	}
	
	max = maxPrice(b, n);
	
	printf("Name is %s and price is %d", max.name, max.price);
	
	
}
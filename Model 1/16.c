//Write a program to read the details of book authors and write it to a file, until the user
//confirms to end. Then read and display the nth record in the file, where n is read from the
//user. The data for authors must be represented by structures that contain name, nationality
//and number of books published.


#include<stdio.h>
struct Authors {
	
	char name[50];
	
	char nationality[50];
	
	int noOfBooks;
};



void main(){
	
	struct Authors a[50];
	FILE *fptr;
	
	int n, i = 0;
	char choice ; 
	
	
	fptr = fopen("../files/authors.txt", "w+");
	
	printf("Enter the informations : \n");
	do{
		
		fflush(stdin);
		printf("Name :  ");
		gets(a[i].name);
		
		fflush(stdin);
		printf("nationality: ");
		gets(a[i].nationality);
		
		fflush(stdin);
		printf("No of books :  ");
		scanf("%d", &a[i].noOfBooks);
		
		
		
//		fprintf(fptr, "%s %s %d", a[i].name, a[i].nationality, a[i].noOfBooks);

		fwrite(&a[i], sizeof(a[0]), 1, fptr);
		
		i++; // very imp
		
		
		fflush(stdin);
		printf("Do you want to continue: ?");
		scanf("%c", &choice);
		
		
	} while(choice == 'y');
	
	rewind(fptr);
	
	fread(&a, sizeof(a[0]), i, fptr);
	
	printf("\nEnter vlaue of N : ");
	scanf("%d", &n);
	printf("\nThe information of nth authorsL \n");
	printf("Name : %s \n Nationality : %s \n No of books  : %d \n", a[n-1].name, a[n-1].nationality, a[n-1].noOfBooks );
	
	fclose(fptr);
	
	
	
	
}
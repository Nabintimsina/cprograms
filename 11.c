//Create a structure named Student which has name and
//marks obtained in one subject. Write a program to read name and Marks of 10 student and
//display the name of student which has the fifth highest marks in a subject


#include<stdio.h>

struct Student{
	
	char name[50];
	
	int marks;
	
};


void main(){
	
	struct Student s[10], temp;
	
	int i,j,n=5;
	
	
	printf("Enter the information of students : \n");
	
	for(i = 0; i<n; i++){
		
		fflush(stdin);
		
		printf("\nName: ");
		gets(s[i].name);
		
		printf("Marks: ");
		scanf("%d", &s[i].marks);
	}
	
	
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(s[i].marks < s[j].marks){
				temp  =  s[i];
				s[i] = s[j];
				s[j] = temp;
				
			}
			
		}
	}
	
	printf("The detailed of student which has fifth highest mark is : \n");
	
	printf("Name : %s and Mark :  %d ", s[4].name , s[4].marks);
}
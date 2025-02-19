//Write a program to input and save record
//like name, roll, address and obtained marks of 48 students in a binary file and search and
//display the record of a student whose obtained marks is highest. The information should be
//organized in a structure.


#include<stdio.h>

struct Student {
	int roll;
	int marks;
	char name[20];
	char address[100];
	
};

void main(){
	
	struct Student s[48], s1[48], max;
	
	FILE *fptr;

	
	int n= 48, i, high;
	
	fptr = fopen("../files/students.bat", "wb+");
	
	printf("ENter the details of student :\n ");
	
	for(i=0; i<n; i++){
		
		fflush(stdin);
		printf("Name : ");
		gets(s[i].name);
		
		fflush(stdin);
		printf("Address : ");
		gets(s[i].address);
		
		printf("Roll : ");
		scanf("%d", &s[i].roll);
		
		printf("Mark : ");
		scanf("%d", &s[i].marks);
		
		fwrite(&s[i], sizeof(s[0]), 1, fptr );
	}
	
	rewind(fptr);
	
	fread(&s1, sizeof(s1[0]),n, fptr );
	
	
	high = s[0].marks;
	for(i=0; i<n ; i++){
		
		if(s[i].marks > high)
			max = s[i];
		
	}
	
	printf("The information is : \n");
	printf("Name: %s \nAddress : %s\nRoll : %d\nMarks: %d", max.name, max.address, max.roll, max.marks);
	
}
//Write the program to read records from file named
//“student.dat” in structure student with member roll, name and marks. Display the records
//in sorted order. sorting is performed in ascending order with respect to name using data
//files concept.



#include<stdio.h>
#include<string.h>

struct Student{
	int roll;
	int marks;
	char name[100];
	
};

void main(){
	
	
	FILE *fptr;
	struct Student s[100], temp;
	
	
	int n=10, i, j;
	
	fopen("../files/student.dat", "rb");
	
	
	fread(&s, sizeof(s[0]), n , fptr);
	
	
	for(i= 0; i< n ; i++){
		
		for(j = 0; j< n ; j++){
			
			if(strcmp(s[i].name, s[j].name)>0)
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			
		}
	}
	
	printf("The information is \n")	;
	printf("Name \t ROll \t Marks ");
	
	for(i= 0; i< n ; i++){
		
		printf("%s \t %d \t %d", s[i].name, s[i].roll, s[i].marks);
	}
	
	
}
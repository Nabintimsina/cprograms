//WAP that opens a file and copies all the content to
//another file. Your file should read name of the source and destination file from the user.


#include<stdio.h>


void main(){
	
	FILE *ptr1, *ptr2;
	
	char source[100], destination[100], content[100], ch;
	
	
	printf("Enter the name of source file : ");
	gets(source);
	
	printf("Enter the name of destination file : ");
	gets(destination);
	
	
	ptr1 = fopen(source, "r");
	ptr2 = fopen(destination, "w");
	
//	fgets(content,100, ptr1);
//	printf("%s", content);
//	fputs( content, ptr2);


	while((ch = fgetc(ptr1))!= EOF){
		
		fputc(ch, ptr2);
	}
	
	fclose(ptr1);
	fclose(ptr2);
	
	
	
}





































//WAP to check if given string is palindrome or not using user defined function and without
//using function strrev().

#include<stdio.h>

int Reverse(char txt1[]){
	
	int i, len;
	char temp;
	
	for(len= 0; txt1[len] != '\0'; len++);
	
	for(i = 0; i < len/2; i++){
		
		
		if(txt1[i] != txt1[len-1-i])
			return 0;
			
		
	}
	return 1;
	
}
	

void main(){
	
	char txt1[100];
	
	
	printf("Enter the string to check : ");
	gets(txt1);
	
	if(Reverse(txt1)){
		printf("Palindrome . ");
	}
	else
		printf("Not palindrome .");
	
}
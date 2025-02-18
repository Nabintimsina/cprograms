//WAP to concatenate two string using user defined function and without using string
//handling function.


#include<stdio.h>

void Concat(char [], char []);

void main(){
	
	char txt1[100], txt2[100];
	
	printf("Enter first string : ");
	gets(txt1);
	
	printf("Enter second string : ");
	gets(txt2);
	
	Concat(txt1, txt2);
	
	printf("Concatenated string is %s ", txt1);
	
}

void Concat(char txt1[], char txt2[]){
	
	
	int i, len;
	
	for(len = 0 ; txt1[len] != '\0'; len++);
	
	for(i = 0; txt2[i] != '\0'; i++){
		
		txt1[len + i ] = txt2[i];
	}
	
	txt1[len + i] = '\0';
	
}
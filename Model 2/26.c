//WAP in c that crates a structure
//named vehicle with its member year, brandName. Rread ‘n’ number of vehicle information
//and write it to fil named vehicle.dat.

#include<stdio.h>

struct vehicle {
	int year;
	char brand[50];
	
};

void main(){
	
	FILE *fptr;
	struct vehicle v[100];
	int n, i;
	
	
	fptr = fopen("../files/vehicle.dat", "wb");
	
	printf("Enter the no of vehicles : ");
	
	scanf("%d", &n);
	
	for(i= 0; i<n ; i++){
		printf("Year : ");
		scanf("%d", &v[i].year);
		
		fflush(stdin);
		printf("Brand : ");
		gets(v[i].brand );
	}
	
	fwrite(&v, sizeof(v[0]), n , fptr);
	
	fclose(fptr);
	
}
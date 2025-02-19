//Write a program to create structure "Time" with members hrs, min and sec. Read current
//time and previous time using structure and display the difference between current time and
//previous time.


#include<stdio.h>

struct Time{
	int hrs;
	int min;
	int sec;
	
};

void main(){
	
	struct Time ct, pt, diff;
	
	printf("Enter the current time : hh: mm : ss");
	scanf("%d%d%d", &ct.hrs, &ct.min, &ct.sec);
	
	printf("Enter the past time : hh: mm : ss");
	scanf("%d%d%d", &pt.hrs, &pt.min, &pt.sec);
	
	if(pt.sec > ct.sec){
		ct.sec += 60;
		ct.min -= 1;
	}
	if(pt.min > ct.min){
		ct.min += 60;
		ct.hrs -=1;
	}
	
	if(pt.hrs > pt.min){
		ct.hrs += 24;
	}
		
	diff.sec = ct.sec - pt.sec;
	diff.min = ct.min - pt.min;
	diff.hrs = ct.hrs - pt.hrs;
	
	
	printf("The differnce times is %d :: %d :: %d", diff.hrs, diff.min, diff.sec);
		
}
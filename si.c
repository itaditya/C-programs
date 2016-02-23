#include<stdio.h>		//header file used for input/output operations

int main()	//function main gets called first by default

{
	int p,r,t;    //variable declarations
	float i;
	
	printf("\nEnter the value of p\n");
	scanf("%d",&p);
	
	printf("\nEnter the value of r\n");
	scanf("%d",&p);
	
	printf("\nEnter the value of t\n");
	scanf("%d",&p);
		
	i=( (float)(p*r*t) )/100;  // formula to calc Simple Interest
	
	printf("Simple Interest = %f\n",i);	//display result after calculation
	
} 		//end of main


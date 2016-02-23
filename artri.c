#include<stdio.h>	//header file used for input/output operations

main()	//function main gets called first by default

{
int b,h;

printf("Input base of triangle\n"); 	//input the values

scanf("%d",&b);

printf("Input height of triangle\n");	
scanf("%d",&h);

b=0.5*b*h;
printf("Area of triangle is= %d\n",b);	// area of triangle

}		//end of main

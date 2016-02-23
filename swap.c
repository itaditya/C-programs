#include<stdio.h>			//header file used for input/output operations

main()			//function main gets called first by default

{

	printf("Input 2 numbers\n");
	
	int a,b,temp;
	scanf("%d%d",&a,&b); 		//input values 
	
	temp=a;	//perform swap using third variable : temp
	a=b;      
	b=temp;
	
	printf("The numbers are now swaped\n");
	
	printf("\na=%d\n",a);	//display swapped number
	printf("\nb=%d\n",b);
	
} 		//end of main

#include<stdio.h>		//header file used for input/output operations

main()			//function main gets called first by default

{

	printf("Input 2 numbers\n");
	
	int a,b;   		// a and b store the nos.
	
	scanf("%d%d",&a,&b);	// input numbers
	
	a=a+b;	//store sum in a
	b=a-b;		// store diff in b so now b is swapped
		
	a=a-b;	//swap by subtracting from sum the new value of b
	
	printf("The number's swapped values are ::\n");
	
	printf("\na=%d\n",a);	//display numbers
	printf("\nb=%d\n",b);
	
} 		//end of main

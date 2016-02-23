#include<stdio.h>			//header file used for input/output operations

main()		//function main gets called first by default 

{
	float c,f;			//c is used to store temp in Celsius and f in Fahrenheit
	
	printf("Enter temp in celcius\n");	
	
	scanf("%f",&c);			//input temp  in  celcius
	
	f=1.8*c+32;				//formula used to convert *C to *F
	
	printf("%f\n",f); 	// produce output in fahrenheit
	
} 		//end of main


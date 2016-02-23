#include<stdio.h>	//header file used for input/output operations

int main()	//function main gets called first by default

{
	int d,t,rem,rem1;
	
	printf("Enter binary number (Max : three digits)\n");
	scanf("%d",&t);
	
	rem=t%10; 			//separating last digit
	
	t=t/10;                  //deleting last digit
	             
	rem1=t%10;			 //separating second last digit
	
	t=t/10;				//storing first digit in t

	d= rem + rem1*2 + t*4;  	// convert into decimal
	
	printf("The decimal number = %d\n",d);   	  	// printing decimal
	
}		//end of main

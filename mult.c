#include<stdio.h>	//header file used for input/output operations

int main()	//function main gets called first by default

{
	int t,s=0,rem;
	printf("Enter a number (Max: three digits) \n");	// input digits
	scanf("%d",&t);
	
	rem=t%10;	//separating last digit
	
	s+=rem;	//adding it to s
	
	t=t/10;  	//deleting last digit from t 
	
	rem=t%10;	//separating second digit
	
	s+=rem;
	
	t=t/10;    //now t has first digit only
	
	s+=t;   
	printf("the sum of digits =%d\n",s);	//produce output
	
}		//end of main

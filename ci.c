#include<stdio.h>	//header file used for input/output operations

#include<math.h>	//header file used for math operations like pow

main()		//function main gets called first by default
{

	int p,r,t;
	float a;

	printf("Enter Principal , Rate , Time\n");	//input values 
	scanf("%d%d%d",&p,&r,&t);

	a=1+((float)r)/100;	    //float is used to typecast r into float type
	
	a=p*pow(a,t);    //calculating Amount

	printf("Amount = Rs.%3.2f \n",a);

	a-=p;		//calculating Compound Interest

	printf("C.I.= Rs.%3.2f \n",a);		//Display C.I.

}		//end of main

/* if in line 14 typecast is not done then r/100 = 0 so CI= 0 :: wrong output  */

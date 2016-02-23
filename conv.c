#include<stdio.h>	//header file used for input/output operations

int main()	//function main gets called first by default

{

	int a;
	float d;
	printf("Enter the amount \n");	//input money in paise
	scanf("%d",&a);
	
	d=((float)a)/100;
	
	printf("%.2f\n",d);	//money in rupees

}		//end of main

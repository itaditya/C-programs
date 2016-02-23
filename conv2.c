#include<stdio.h>	//header file used for input/output operations

int main()	//function main gets called first by default

{
	int a;
	float d;
	printf("Enter the distance.  \n");		//Enter the distance in metre
	scanf("%d",&a);
	
	d=((float)a)/1000;
	printf("distance in km\n");
	
	printf("%.2f\n",d);	//output in km

}		//end of main


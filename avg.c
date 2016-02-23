#include<stdio.h>	//header file used for input/output operations

int main()	//function main gets called first by default

{

int a,b,c,d,e;
float f;

printf("Input marks in 5 subjects");	//input the marks
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

f=(a+b+c+d+e)/5;		//calc of average

printf("Average marks are= %.2f\n",f);	//producing the output

}		//end of main

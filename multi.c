#include<stdio.h>		//header file used for input/output operations

main()		//function main gets called first by default
{
	int a,t,rem,rem1;
	printf("Enter the no (max three digits) \n");
	scanf("%d",&a);

	printf("%d is ",a);

	if(a%2==0)	//odd even check
		printf("Even , ");
	else
		printf("Odd , ");

	t=a;
	rem=t%10;	//separating digits of three digit no.
	t=t/10;
	rem1=t%10;
	t=t/10;

	t=rem*rem*rem+rem1*rem1*rem1+t*t*t;   //calc sum of cubes of digit

	if(t==a) 	//checking armstrong
		printf("Armstrong ");
	else
		printf("Not Armstrong ");

    if(a==rem||rem==1||rem==3||rem==7||rem==9)  //checking the last digit is 1,3,7,9 if it's not one digit prime no.
     {  
                if(a==2||a==3||a==5||a==7||a==11||a==13||a==17||a==19||a==23||a==29||a==31||a==37||a==41||a==43||a==47||a==53||a==59||a==61||a==67||a==71||a==73||a==79||a==83||a==89||a==97||a==101||a==103||a==107||a==109||a==113||a==127||a==131||a==137||a==139||a==149||a==151||a==157||a==163||a==167||a==173||a==179||a==181||a==191||a==193||a==197||a==199||a==211||a==223||a==227||a==229||a==233||a==239||a==241||a==251||a==257||a==263||a==269||a==271||a==277||a==281||a==283||a==293)				//checking prime
					{printf("and Prime\n");      
			} 
			} 
    else if(a>300) 
    		printf(" and %d can't be checked for Prime No. as Number Limit Exceeded\nEnter a number less than 300\n ",a); 
    else 
    		printf(" and Composite\n");
    		
}		//end of main

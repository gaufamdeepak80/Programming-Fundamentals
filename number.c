/*
Student Name:Dipak Gautam
Subject : Programming fundamentals
Roll no: 17
Lab no:07
Program:Print nature of number(either number is positive,negative or zero)
Date:17 oct,2016
*/
#include<stdio.h>
int main()
{
	int a;
printf("Enter any number:\n");
scanf("%d",&a);
if(a>0)
{
	printf("%d is positive no:\n",a);
}
else if(a<0)
{
	printf("%d is negative no:\n",a);
}
else 

{
	printf("%d is zero",a);
}




return 0;
}

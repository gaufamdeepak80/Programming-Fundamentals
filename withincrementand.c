/*
Student name: Dipak Gautam 
Subject:Programming Fundamentals
Program:
Roll no:10
Lab no:07
Date:18 oct,2016
*/
#include<stdio.h>
//#include<conio.h>
int main()
{
	int a,b,sum,sub,mul,div,mod,v ;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	sum=a+b;
	printf("Use of '+' Operator:\n");
	printf("%d+%d=%d\n",a,b,sum);
	sub=a-b;
	
	printf("Use of '-' Operator:\n");
	printf("%d-%d=%d\n",a,b,sub);
	mul=a*b;
	
	printf("Use of '*' Operator:\n");
	printf("%d*%d=%d\n",a,b,mul);
	div=a/b;
	
	printf("Use of '/' Operator:\n");
	printf("%d/%d=%d\n",a,b,div);
	mod=a%b;
	
	printf("Use of '%%' Operator:\n");
	printf("%d %% %d=%d \n",a,b,mod);
	printf("Enter v integer value:\n");
	scanf("%d",&v);
	printf("Original value of v is %d \n",v);
	printf("The post fix increament(v++) is  : %d\n",v++);
	printf("The prefix increment(++v) is : %d \n",++v);
	printf("Original value of v is %d \n",v);
	printf("The post fix decreament(v--) is  : %d\n",v--);
	printf("The prefix decrement(--v) is : %d \n",--v);
	return 0;
}
	
	
	
	

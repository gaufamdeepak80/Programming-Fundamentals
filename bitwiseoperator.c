/*
Student name : Dipak Gautam 
Subject:Programming Fundamentals
Program:Write a program to use bitwise operator(AND(&),OR(|),complement(~))
lab no : 08
Date:19 oct,2016
*/
#include<stdio.h>
//include<conio.h>

int main()
{
	int x,y;
printf("Enter value of x: ");
scanf("%d",&x);

printf("Enter value of y: ");
scanf("%d",&y); 

printf("Use of bitiwise operator\n");
printf("Using AND (&)  operator:\n");
printf("%d&%d=%d\n",x,y,x&y);

printf("Using OR(|) operator: \n");
printf("%d|%d=%d\n",x,y,x|y);

printf("Using Complement(~) operator \n");
printf("~%d=%d\n",x,~x);

printf("Use of X-OR(^) operator\n");
printf("%d^%d=%d\n",x,y,x^y);

return 0;

}

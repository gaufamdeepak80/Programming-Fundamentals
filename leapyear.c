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
int days;
printf("Enter total number of days of month febraury\n");
scanf("%d",&days);
if (days==29)
{
	printf("This year is leap year\n");
}
else if (days==28)
{
	printf("This year is not leap year\n");
}
else
{
	printf("Invalid number of days");
}
	return 0;
}

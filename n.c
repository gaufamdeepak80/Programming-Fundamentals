/*
Student name:Dipak Gautam 
Subject:Programming Fundamentals
Program:Write a program to find sum of square 0f  n nuatural numbers.
Date :Nov 22,2016
Lab no:16
*/
#include<stdio.h>

int main()
{
int n,i,sum=0;
printf("Enter any number\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
sum+=i;

printf("sum of square of n natural numbers=%d\n",sum);
return 0;
}

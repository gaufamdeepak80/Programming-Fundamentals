/*
Student name : Dipak gautam
Subject:Programming fundamentals
Program:Write a program to swap two numbers
Lab no :08
Date:19 oct,2016
*/
#include<stdio.h> 

 int main()
 {
 int x,y,temp;
 
 printf("Enter value of x: ");
 scanf("%d",&x);
 printf("Enter value of y: ");
 scanf("%d",&y); 
 printf("Before swaping\n");
 printf("x=%d   y=%d\n",x,y);
 printf("Swaping Numbers:\n");
 
 temp=x;
 x=y;
 y=temp;
 
	printf("x=%d   y=%d",x,y);
	
return 0;	
}
 
 
 

/*
Student Name:Dipak Gautam
Subject:Programming Fundamentals
Program:WAP to print last digit of any number & number without last digit.
Lab No:16
Date:24  Nov,2016
*/
#include<stdio.h>
#include<conio.h>
 void main()
 {
     int a,b,d;
     x:
     printf("\nEnter Any Number:");
     scanf("%d",&a);
     b=a%10;
     d=a/10;


     printf("\nLast digit Number =%d",b);

      printf("\n Number without last digit =%d",d);
      getch();
 }


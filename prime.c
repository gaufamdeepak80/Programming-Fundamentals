/*
Student Name:Dipak Gautam

Subject:Programming Fundamentals
Program:To print whether entered number is prime or not
Lab no:12
Date:4 Nov,2016
*/
#include<stdio.h>

int main(){
int a,i,count=0;
printf("Enter any number\n");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
count++;
}
if(count<=0)
{
	printf("%d is prime",a);
	}
else
{
		printf("%d is not prime",a);
}

return 0;
}

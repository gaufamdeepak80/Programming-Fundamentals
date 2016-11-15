/*
Student Name:Dipak Gautam
Program:To print menu based Program
Date:10 nov,2016
lab no:13
*/
#include<stdio.h>

int main()
{
int a,b,c;
char s,d;
x:
	
	printf("***********************************\n");
	printf("**   Enter any no:-              **\n");
	printf("**   1. ODD/EVEN                 **\n");
	printf("**   2. Check prime/not          **\n");
	printf("**   3. Check Vowel/consonant    **\n");
	printf("**   4. ASCII Value              **\n");
	printf("***********************************\n\n");
		
	scanf("%d",&a);

switch(a)
	{
	case 1:
		printf("*Program to check odd or even :*\n\n");
		printf("*Enter a number : ");
		
		scanf("%d",&b);
		printf("*%d is a ",b);
		if(b%2==0) printf("Even");
		else printf("Odd");
		printf(" Number *");
		printf("\n\n");
		scanf("%d",&a);
		goto x;
		break;
               
	case 2:
		printf("*Program to check Prime or not :*\n\n");
		printf("*Enter a number : ");
		scanf("%d",&b);
		printf("%d is ",b);
		c=2;
		do{
		    d=b%c;
		   if(d==0) {
				printf("not a prime number\n"); 
				
				}
		   c++;
		  }while(c<b);		
		
		printf("a prime number\n");
		
		printf("\n\n");
		scanf("%d",&a);
				
		break;
	

	case 3:
			printf("3. Check vowel or consonant:\n");
			printf("Enter any character:\n");
			scanf("%s",&d);
			
			(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')?printf("%c is vowel.\n",d):printf("%c is consonant.\n",d);
         break;
	

	case 4:
		printf("Program to Print ASCII value :\n");
		printf("Enter anything :");
		scanf("%s",&s);
		
		printf("The ASCII value is %d",s);
		printf("\n\n");
		scanf("%d",&a);
		
		break;
	}
return 0;
}

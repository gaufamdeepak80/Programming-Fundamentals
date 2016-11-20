/*
Student Name:Diak Gautam
Subject:Programming Fundamentals
Lab no:15
*/
#include<stdio.h>
int main()
{
int a,b,c,d,e;
x:
printf("***********************************************\n");
printf("**                   MENU                    **\n");
printf("**         CHOOSE ANY NUMBER FROM BELOW      **\n");
printf("**           1.Area of Rectangle             **\n");
printf("**           2.Perimeter of Rectangle        **\n");
printf("**           3.Area of Trpezium              **\n");
printf("**           4.Exit                          **\n");
printf("***********************************************\n");
scanf("%d",&a);

switch(a)
{
	case 1:
	      printf("         Program To print area of Rectangle\n");
	     
	      printf("         Enter length of rectangle:");
	      scanf("%d",&b);
	      printf("         Enter breath of rectangle:");
	      scanf("%d",&c);
	      d=b*c;
	      printf("         Area of Rectangle = %d\n\n",d);
	      printf("         Welcome again \n\n");
	      goto x;
	      break;
	      
	 case 2:
	      printf("         Program To print Perimeter of Rectangle\n");
	     
	      printf("         Enter length of rectangle:");
	      scanf("%d",&b);
	      printf("         Enter breath of rectangle:");
	      scanf("%d",&c);
	      
	      d=2*(c+b);
	      printf("         Perimeter of Rectangle = %d\n\n",d);
	      printf("         Welcome again \n\n");
	      goto x;
	      break;
	      
	      
	 case 3:
	      printf("         Program To print Area of Trapezium\n");
	     
	      printf("         Enter length of Trapezium:");
	      scanf("%d",&b);
	      printf("         Enter breath of Trapezium:");
	      scanf("%d",&c);
	      printf("         Enter height of Trapezium:");
	      scanf("%d",&e);
	      d=0.5*(b+c)*e;
	      printf("         Area of Trapezium = %d\n\n",d);
	      printf("         Welcome again \n\n");
	      goto x;
	      break;
	      
     case 4:
          printf("         THANK YOU       \n");
          printf("         Exit            \n");
          break;
           
     default:
          printf("   Wrong Instruction       \n");
          printf("   Wanna try again         \n\n");
          printf("         Welcome again \n\n");
          goto x;
          
          
          

}

return 0;
}

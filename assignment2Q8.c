/* program which reads sides of a trianle and prints the angle A */
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,A;
       printf("enter the sides of triangle");
       scanf("%d%d%d",&a,&b,&c);
       A=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*(b*c)));
       printf("angle A in radians=%f",A);
       printf("angle A in degrees=%f",A*(180/3.14));
		       }



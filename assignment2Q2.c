/* Q2:program to calculate distance between two coordinates */
#include<stdio.h>
#include<math.h>
int main()
{	
	int a,b,c,d;
	float x;
printf("enter the coordinates of triangle: \n");
scanf("%d%d%d%d",&a,&b,&c,&d);
                x=sqrt(pow((c-a),2)+pow((d-b),2));
		printf("x:%f",x);
		
		}




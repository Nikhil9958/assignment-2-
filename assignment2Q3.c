/* Q3:program to calculate area of triangle */
#include<stdio.h>
#include<math.h>
int main()
{	
	int a,b,c,d,e,f;
	float s,x,y,z,area;
printf("enter the coordinates of triangle: \n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
                x=sqrt(pow((c-a),2)+pow((d-b),2));
		y=sqrt(pow((e-c),2)+pow((f-d),2));
		z=sqrt(pow((e-a),2)+pow((f-b),2));
		s=(x+y+z)/2;
		area=sqrt(s*(s-x)*(s-y)*(s-z));
		printf("s=%f",s);
		printf("x:%f,y:%f,z:%f",x,y,z);
		printf("area is%f",area);
		}




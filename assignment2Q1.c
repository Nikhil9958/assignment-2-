/* Q1:program to calculate area of triangle */
#include<stdio.h>
#include<math.h>
int main()
{	int x,y,z;
	float s,area;
        printf("enter the coordinates of triangle: \n");
        scanf("%d%d%d",&x,&y,&z);
        s=(x+y+z)/2;               
	area=sqrt(s*(s-x)*(s-y)*(s-z));
        printf("area is%f",area);
		
}

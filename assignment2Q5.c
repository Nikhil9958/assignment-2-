/* program to calculate the distance between a line and a point */
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	float f;
	printf("enter the inputs a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=((a*c)+(b*d)+e)/sqrt(pow(c,2)+pow(d,2));
        printf("distance=%f",f);
}	

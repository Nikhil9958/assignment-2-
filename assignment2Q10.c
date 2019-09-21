/* program to calculate the length of chord of a circle*/
#include<stdio.h>
#include<math.h>
int main()
{
	int h,k,r,s;
	float l;
	printf("enter the centre and radius");
	scanf("%d%d%d%d",&h,&k,&r,&s);
	l=sqrt(pow(r,2)+(2*h*s)-pow(h,2)-pow(s,2));
	printf("the lenghth of chord:%f",l*2);
}

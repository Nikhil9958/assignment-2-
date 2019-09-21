/* program to calculate point of intersection of 2 lines */
#include<stdio.h>
int main()
{
	float a,b,c,p,q,r;
	printf("enter a,b,c,p,q,r");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
        printf("point of intersection:%f\t%f",((r*b)-(c*q))/((a*q)-(p*b)),((r*a)-(c*p))/((b*p)-(q*a)));
}

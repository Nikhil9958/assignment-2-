/* program to print radius and centre of a circle */
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	printf("centre:%f\t%f",(-a)/2,(-b)/2);
	printf("radius:%f",sqrt(pow((-a)/2,2)+pow((-b)/2,2)-c));
}

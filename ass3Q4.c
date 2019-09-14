#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	if((a*a==(b*b+c*c)))
		printf("angle is 90 degree");
	else
		printf("angle is not equal to 90 degree");
}

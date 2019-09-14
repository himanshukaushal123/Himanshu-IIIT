#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,t,y;
	printf("enter the sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	y=((b*b+c*c-a*a)/2*b*c);
	t=acos(y);
	printf("angle A =%f",t);
}

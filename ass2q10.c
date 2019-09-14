#include<stdio.h>
#include<math.h>
int main()
{
	float h,k,r,s,l,len;
	printf("enter centre of circle and radius");
	scanf("(%f,%f) %f%f",&h,&k,&r,&s);
	l=(h-s);
	len=2*sqrt(r*r-l*l);
	printf("length of chord is %f",len);
}

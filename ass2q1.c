#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	float area;
	printf("sidea of triangle ab bc ca respectivily");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is=%f",area);
}


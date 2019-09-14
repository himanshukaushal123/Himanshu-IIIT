#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,d,e,f;
	printf("enter the cordinate of triangle");
	scanf("(%d,%d) (%d,%d) (%d,%d)",&a,&b,&c,&d,&e,&f);
	float area;
	area=0.5*(a*(d-f)-c*(d-f)+e*(b-d));
	printf("area of triangle is=%f",area);
}

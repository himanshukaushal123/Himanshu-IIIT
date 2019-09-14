#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e;
	float dis;
	printf("line and point");
	scanf("%fx+%fy+%f\n(%f,%f)",&c,&d,&e,&a,&b);
	
	dis=((a*c+b*d+e)/sqrt(c*c+d*d));
	printf("distance is %f",dis);
}

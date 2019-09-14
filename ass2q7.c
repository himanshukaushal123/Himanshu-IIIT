#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,p,q,r,m,n,d,x,y;
	printf("enter both the lines");
	scanf("%fx+%fy+%f=0 %fx+%fy+%f=0",&a,&b,&c,&p,&q,&r);
	
	
	y=((a*(-r)+c*(p))/(b*p-q*a));
	x=((-b*(r*a-c*p)/(b*p-q*a)-c)/a);
			printf("x=%f and y=%f",x,y);

}

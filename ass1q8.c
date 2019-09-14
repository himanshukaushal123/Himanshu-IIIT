#include<stdio.h>
int main()
{ int x,a,b,c,d;
	printf("enter the number");
	scanf("%d",&x);
	a=x%10;
	b=a*2;
	c=x/10;
	d=c*10+b;
	printf("%d",d);
}

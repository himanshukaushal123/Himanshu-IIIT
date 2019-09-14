#include<stdio.h>
int main()
{
	int x,a,b,c,d;
		printf("enter the number");
	scanf("%d",&x);
	a=x%10;
	b=x/10;
	c=b%10;
	d=a+c;
printf("%d",d);
}

#include<stdio.h>
int main()
{
	int x,a,b,c,d,e;
		printf("enter the number");
	scanf("%d",&x);
	a=x%10;
	b=x/10;
	c=b%10;
	d=x/100;
	e=(d*100)+(a*10)+c;
	printf("%d",e);
}

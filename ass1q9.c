#include<stdio.h>
int main()
{
	int x,a,b,c;
		printf("enter the number");
	scanf("%d",&x);
	a=x/100;
	b=x%10;
	c=a*10+b;
	printf("%d",c);
}

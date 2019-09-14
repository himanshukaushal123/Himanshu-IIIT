#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	printf("enter a number a b c d x");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	if(a==x)
		printf("x=a",a);
	else
		if(b==x)
			printf("x=b and number is%d",b);
		else
			if(c==x)
				printf("x=c and number is%d",c);
			else
				if(d==x)
					printf("x=d and number is %d",d);
				else
					printf("none of them is equal to x");
}

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("a is largest number");
	else
		if(b>a&&b>c)
			printf("b is largest number");
		else
			if(c>a&&c>b)
				printf("c is largest");




}

	

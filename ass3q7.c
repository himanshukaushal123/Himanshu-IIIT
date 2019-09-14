#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a value a b c in which two are same");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
		printf("c is different anfd it is %d",c);
	if(b==c)
		printf("a is different and it is %d",a);
			if(a==c)
				printf("b is different and it is %d",b);
}

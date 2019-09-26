#include<stdio.h>
int main()
{ int i,j,t=0;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)	
		{	printf("%c",65+t);
			t++;
		}
		printf("\n");
	}
}

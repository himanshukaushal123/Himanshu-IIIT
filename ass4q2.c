#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<80;x++)
		if((x>20)&&(x<40)||(x>50)&&(x%2==0))
			printf("\n%d",x);
}

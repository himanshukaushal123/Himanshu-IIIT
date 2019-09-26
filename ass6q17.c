#include<stdio.h>
int main()
{ int i,j,t=0;
        for(i=1;i<=6;i++)
        {
                for(j=1;j<=6-i;j++)
		{	for(t=1;t<=i;t++)
                        printf("%c",63+j+i);
		}
        printf("\n");
     }

}

#include<stdio.h>
int main()
{ int i,j,k;
        for(i=1;i<=6;i++)
        { for(k=1;k<i;k++)
		printf(" ");
		for(j=1;j<=7-i;j++)
                 printf("%c",63+i+j);
                printf("\n");
        }
}

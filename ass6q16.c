#include<stdio.h>
int main()
{ int i,j,t=0;
        for(i=1;i<=6;i++)
        {
                for(j=1;j<=7-i;j++)
		{
			printf("%c",64+j+t);

              	for(t=1;t<i;t++)
			t++;
		}

        printf("\n");
     }

}

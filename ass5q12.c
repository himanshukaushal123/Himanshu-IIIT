#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<10;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if(i%2==0 || (i>4 && j>3 && j<14))
                        printf("*");
                        else
                                printf("0");
                }
        }
}

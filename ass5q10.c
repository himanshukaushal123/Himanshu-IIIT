#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<10;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if(i>1 && (i+j>7 && j<2*i+4))
                        printf("0");
                        else
                                printf("*");
                }
        }
}

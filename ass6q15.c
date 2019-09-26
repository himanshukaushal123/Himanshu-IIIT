#include<stdio.h>
int main()
{ int i,gr;
        for(gr=1;gr<=6;gr++)
        {
                for(i=1;i<=gr;i++)
                         printf("%c",63+i+gr);
                 printf("\n");

        }
}

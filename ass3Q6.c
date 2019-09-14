#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
float m,k,l;
printf("enter the value of a b c");
scanf("%d%d%d",&a,&b,&c);
m=b*b-4*a*c;
k=-b-sqrt(b*b-4*a*c/2*a);
l=-b+sqrt(b*b-4*a*c/2/a);
if(m>0)
printf("both roots are real and distinct and roots are %f%f",k,l);
if(m<0)
printf("both roots are imaginary and roots are %f%f",k,l);
if(m==0)
printf("both roots are real and equal and roots are %f%f",k,l);}

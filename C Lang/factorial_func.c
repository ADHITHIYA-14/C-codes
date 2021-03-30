#include <stdio.h>


int fac(int n )
{
   int i,a;
   a=1;
   for(i=1;i<=n;i++)
   {
       a*=i;
   }
   printf("%d",a);
    return a;
}

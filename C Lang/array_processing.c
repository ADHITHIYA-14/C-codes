#include <stdio.h>

int main(void)
{
   int i,f=0,a[100],t;
   scanf("%d",&t);
   printf("Input t numbers :::");
   for(i=1;i<=t;i++)
   {
       scanf("%d",&a[i]);
    }
   for(i=1;i<=t;i++)
    {
      printf("%d ",a[i]);
    }
    return 0 ;
}

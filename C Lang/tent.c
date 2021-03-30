#include<stdio.h>
int main(void)
{
    int i=1,sumpos=0,sumneg=0,val[100],n;
    printf("\ninput the values::: ");
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d",&val[i]);
        if(val[i]>=0) 
            sumpos++;
        else
            sumneg=sumneg+val[i];
        i++;
    }
    printf("\n%d     %d",sumpos,sumneg);
}
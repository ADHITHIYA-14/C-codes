#include <stdio.h>


int gcd_fn(int a, int b)
{
    int i,gcd;
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    return(gcd);
}

int lcm_fn(int a, int b)
{
    int i, lcm, h, prod, flag=0;
    prod=a*b;
    if(a<b)
        h=b;
    else
        h=a;
    i=h;
    while(flag==0&&i<=prod)
    {
        if(i%a==0&&i%b==0)
        {
            lcm=i;
            flag=1;
        }
        i++;
    }
    return(lcm);
}

int main()
{
    int i,num, a[100],b[100];
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=1;i<=num;i++)
        printf("%d %d\n",gcd_fn(a[i],b[i]),lcm_fn(a[i],b[i]));
 
    
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   int k,i,l;
    char pwd[20],new_s[20];
    scanf("%s",&pwd);
    //scanf("%d",&k);
    l=strlen(pwd);
   printf("%s %d",pwd,l);
   for(i=0;i<=l;i++)
      new_s[i]=pwd[i]+2;
       
   printf("\n%s",new_s);
   
    return 0;
}
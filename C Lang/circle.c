#include <stdio.h>
#include <math.h>

int main()
{
     float r,area;
    const float pi=3.1415926535;  
    printf("Radius of circle is:::");
    scanf("%f", &r);
    area=pi*r*r;
    printf("Area:::%f",area);
    return 0;
}
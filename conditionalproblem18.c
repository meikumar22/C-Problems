#include <stdio.h>

int main()
{
    int unit;
    scanf("%d", &unit);

    if(unit<=0)
    {
        printf("Bill amount = No cost");
    }
    else if(unit>0 && unit<100)
    {
        int d = unit*2;
        printf("Bill amount = Rs.%d,d");
    }
    else if(unit>=100 && unit<200)
    {
        int d = unit*5;
        printf("Bill amount = Rs.%d", d);
    }
    else
    {
        int d = unit*10;
        printf("Bill amount = Rs.%d",d);
    }
    return 0;
}
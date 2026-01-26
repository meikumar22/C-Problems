#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    int d = a+b+c;

    if(d==180)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Not valid triangle");
    }

    return 0;
}
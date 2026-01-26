#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num>0)
    {
        printf("It is Positive Number");
    }
    else if(num<0)
    {
        printf("It is negative number");
    }
    else
    {
        printf("It is Zero");
    }

    return 0;
}
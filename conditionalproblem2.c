#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }

    return 0;
}
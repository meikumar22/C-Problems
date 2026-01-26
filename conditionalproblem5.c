#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if(year%4==0 && year!=100 || year%400==0)
    {
        printf("It is Leap year");
    }
    else
    {
        printf("It is not Leap year");
    }

    return 0;
}
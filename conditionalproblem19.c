#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if(a>=48 && a<=57)
    {
        printf("Digit");
    }
    else
    {
        printf("Not an Digit");
    }

    return 0;
}
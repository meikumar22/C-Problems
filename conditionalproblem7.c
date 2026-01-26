#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if(a>=65 && a<=90 || a>=97 && a<=122)
    {
        printf("It is alphabet");
    }
    else if(a>=48 && a<=57)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is special character");
    }

    return 0;

}
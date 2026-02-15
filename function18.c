#include <stdio.h>

int gcd(int a, int b)
{
    for(; b != 0; )
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%d", gcd(A, B));

    return 0;
}
#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int fib = 0;

    for (int i = 0; i < n; i++) {
        printf("%d\n", fib);
        a = b;
        b = fib;
        fib = a + b;
    }
}

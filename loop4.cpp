#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int mul = 0;

    for (int i = 1; i <= 10; i++) {
        mul = i * n;
        printf("%d\n", mul);
    }
}
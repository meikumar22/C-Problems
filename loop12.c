#include <stdio.h>

int main () {
    int n;
    int p;
    scanf("%d %d", &n, &p);
    int power = 1;

    for (int i = 1; i <= p; i++) {
        power = power * n;
    }
    printf("%d", power);
}

#include <stdio.h>

int main () {
    int even;
    int sum = 0;
    scanf("%d", &even);

    for (int i = 0; i <= even; i+=2) {
        sum = sum + i;

    }
    printf("%d", sum);
}
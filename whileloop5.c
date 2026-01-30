#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int digit = 0;
    while (n!=0) {
        int a = n%10;
        digit = digit + a;
        n = n/10;
    }
    printf("%d", digit);
}

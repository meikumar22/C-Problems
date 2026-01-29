#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a = 1;

    for (int i = 1; i <= n; i++) {
        a = i%2==0 ? 0 : 1;
        for (int j = 1; j <= i; j++) {
            printf("%d",a);
            a = !a;
            }
        printf("\n");
    }
}
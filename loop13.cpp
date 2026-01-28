#include <stdio.h>
int main () {
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int sum = 0;

    for (int i = m; i <= n; i++) {
        if (i%m==0) {
            sum = sum + i;
        }

    }
    printf("%d\n", sum);

}
#include <stdio.h>
int main() {
    int n,m;
    scanf("%d", &n);
    int noise = 0;
    int a,b = 0;

    int i = 1;
    while (i <= n) {
        scanf("%d", &m);
        if (m>70) {
            noise++;
            a++;
            if (a > b) {
                b = a;
            }
        }
        else {
            a = 0;
        }

        i++;
    }
    printf("Noise Violations : %d\n", noise);
    printf("Logest Violation : %d\n", b);

    return 0;
}
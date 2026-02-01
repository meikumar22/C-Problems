#include <stdio.h>

int main() {
    int mark;
    int total = 0;
    scanf("%d", &mark);

    for (int i=1; i<=mark; i++) {
        int mark;
        scanf("%d", &mark);
        total = total + mark;
    }
    printf("%d", total);
}

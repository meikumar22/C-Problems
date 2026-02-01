#include <stdio.h>

int main() {

    int fuel, n, m;
    scanf("%d", &fuel);
    scanf("%d", &n);

    int a = 0;
    int b = 0;
    int i = 0;

    while(i < n) {
        scanf("%d", &m);

        fuel = fuel - m;

        if(fuel < 0 && a == 0) {
            a = i + 1;
            b = -fuel;
        }

        i++;
    }

    if(a != 0)
        printf("Emergency Stage: %d\n", a);
    else
        printf("Emergency Stage: Not Occurred\n");

    printf("Fuel Wasted: %d", b);

    return 0;
}
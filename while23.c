#include <stdio.h>

int main() {

    int n, m;
    scanf("%d", &n);

    int a = 0;
    int b = 0;
    int c = 0;

    int i = 0;

    while(i < n) {
        scanf("%d", &m);

        if(m > 70) {
            a++;
            b++;

            if(b == 3 && c == 0) {
                c = i + 1;
            }
        } 
        else {
            b = 0;
        }

        i++;
    }

    if(c != 0)
        printf("Breakdown At Reading: %d\n", c);
    else
        printf("Breakdown At Reading: Not Occurred\n");

    printf("Unsafe Readings: %d", a);

    return 0;
}
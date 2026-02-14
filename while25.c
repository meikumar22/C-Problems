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

        if(m >= 50000) {
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
        printf("Fraud Triggered At Attempt: %d\n", c);
    else
        printf("Fraud Triggered At Attempt: Not Triggered\n");

    printf("High-Value Transactions: %d", a);

    return 0;

}

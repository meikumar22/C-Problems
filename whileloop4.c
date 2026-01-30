#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rev = 0;
    while (n!=0) {
        int a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    printf("%d", rev);
}
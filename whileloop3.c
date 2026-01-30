#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int digit = 0;

    int ;
    while (n!=0){
        n=n/10;
        digit++;
    }
    printf("%d\n", digit);
}
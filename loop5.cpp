#include<stdio.h>

int main() {
    int countdown;
    scanf("%d", &countdown);

    for (int i = countdown; i >= 1; i--) {
        printf("%d\n", i);
    }
}
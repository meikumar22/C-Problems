#include <stdio.h>

int main() {
    int rev;
    scanf("%d", &rev);

    for (;rev!=0; rev=rev/10) {
        printf("%d", rev%10);
    }



}
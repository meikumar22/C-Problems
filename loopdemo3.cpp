#include <stdio.h>

int main () {
    int books;
    scanf("%d", &books);

    for (int i = 201; i <= 200+books; i++) {
        printf("%d\n", i);
    }
}
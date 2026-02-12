#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the r and c value : ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;

    for(int i = 0; i < r; i++) {

        int rowPrime = 1;

        for(int j = 0; j < c; j++) {

            int num = arr[i][j];

            if(num <= 1) { 
                rowPrime = 0;
                break;
            }

            for(int k = 2; k*k <= num; k++) {
                if(num % k == 0) {
                    rowPrime = 0;
                    break;
                }
            }

            if(rowPrime == 0)
                break;
        }

        if(rowPrime == 1)
            count++;
    }

    printf("%d", count);

    return 0;
}
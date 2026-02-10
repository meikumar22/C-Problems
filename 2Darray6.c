#include <stdio.h>
int main() {
    int r, c;
    printf("Enter the r and c value : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum=0;
    for(int i = 0; i < c; i++){
        sum+=arr[0][i];
    }

    int max = sum;
    int min = sum;

    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            sum += arr[i][j];
        }
        if(sum > max)
            max = sum;
        if(sum < min)
            min = sum;
    }

    int Diff = max - min;
    printf("%d", Diff);
}
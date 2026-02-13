#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the r and c value : ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int dominantCount = 0;

    for(int i = 0; i < r; i++)
    {
        int rowSum = 0;

        for(int j = 0; j < c; j++)
        {
            rowSum += arr[i][j];
        }

        int diagonalValue = arr[i][i];
        int otherSum = rowSum - diagonalValue;

        if(diagonalValue > otherSum)
        {
            dominantCount++;
        }
    }

    printf("%d", dominantCount);

    return 0;
}
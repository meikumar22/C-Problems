#include <stdio.h>
#include <stdlib.h>

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

    int maxDiff = 0;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            for(int x = 0; x < r; x++)
            {
                if(i == x) continue;

                for(int y = 0; y < c; y++)
                {
                    int diff = abs(arr[i][j] - arr[x][y]);
                    if(diff > maxDiff)
                        maxDiff = diff;
                }
            }
        }
    }

    printf("%d", maxDiff);

    return 0;
}
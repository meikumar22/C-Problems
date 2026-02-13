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

    int uniqueRowCount = 0;

    for(int i = 0; i < r; i++)
    {
        int isUnique = 1;

        for(int j = 0; j < c; j++)
        {
            for(int k = j + 1; k < c; k++)
            {
                if(arr[i][j] == arr[i][k])
                {
                    isUnique = 0;
                    break;
                }
            }
            if(isUnique == 0)
                break;
        }

        if(isUnique == 1)
            uniqueRowCount++;
    }

    printf("%d", uniqueRowCount);

    return 0;
}
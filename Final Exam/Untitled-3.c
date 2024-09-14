
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        if (arr[i][i] != 1)
        {
            printf("NO\n");
            return 0; 
        }
    }

    for (int i = 0; i < r; i++)
    {
        if (arr[i][r - 1 - i] != 1)
        {
            printf("NO\n");
            return 0; 
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i != j && i + j != r - 1) && arr[i][j] != 0)
            {
                printf("NO\n");
                return 0; 
            }
        }
    }

    return 0;
}

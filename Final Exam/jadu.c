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

    int flag = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j || i + j == r - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
                else if (arr[i][j] == 0)
                {
                    flag = 1;
                    break;
                }

                if (flag == 1)
                {
                    break;
                }
            }
        }

        if (flag == 1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }

        return 0;
    }
}
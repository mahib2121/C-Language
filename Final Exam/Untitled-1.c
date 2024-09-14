#include <stdio.h>
#include <string.h>

int main()
{
    int Test;
    scanf("%d", &Test);

    for (int t = 0; t < Test; t++)
    {
        int N;
        scanf("%d", &N);
        char rounds[N];
        scanf("%s", rounds);
        int tiger_count = 0, pathan_count = 0;

        for (int i = 0; i < N; i++)
        {
            if (rounds[i] == 'T')
                tiger_count++;
            else if (rounds[i] == 'P')
                pathan_count++;
        }
        if (tiger_count > pathan_count)
        {
            printf("Tiger\n");
        }
        else if (pathan_count > tiger_count)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}

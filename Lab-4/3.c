#include <stdio.h>
#include <stdlib.h>

#define S 6
#define C 7

int main()
{
    int **arr, i, j, k, state;

    arr = (int **)malloc(sizeof(int *) * S);

    for (i = 0; i < S; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * C);
    }

    for (i = 0; i < S; i++)
    {
        for (j = 0; j < C; j++)
        {
            arr[i][j] = rand() % 12;
            printf(" %i", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    for (k = 0; k <= S - 1;k++)
    {
        for (i = 0; i <= S - 1; i++)
        {
            for (j = 0; j <= S - 1; j++)
            {
                if (arr[i][j] < arr[i][j + 1])
                {
                    state = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = state;
                }
            }
        }
    }

    for (i = 0; i <= S - 1; i++)
    {
        for (j = 0; j <= C - 1; j++)
        {
            printf(" %i", arr[i][j]);
        }

        printf("\n");
    }

    free(arr);

    return 0;
}
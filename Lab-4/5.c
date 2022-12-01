#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// [0] - black, [1] - white

int main()
{
    int ***arr, m = 3, n = 3, p = 3, i, j, k, state = 0;

    arr = (int ***)malloc(m * sizeof(int **));

    for (i = 0; i < n; i++)
    {
        arr[i] = (int **)malloc(n * sizeof(int *));

        for (j = 0; j < p; j++)
        {
            arr[i][j] = (int *)malloc(p * sizeof(int));
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < p; k++)
            {
                arr[i][j][k] = rand() % 2;

                printf(" %i", arr[i][j][k]);
            }

            printf("\n");
        }

        printf("\n");
    }

    // logic...

    int value = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < p; k++) {
                if (arr[i][j][k] == 1) {
                    value++;
                }
            }
        }
    }

    printf("%d", value);

    free(arr);

    return 0;
}
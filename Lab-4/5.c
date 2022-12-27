#include <stdio.h>
#include <stdlib.h>

// [0] - red, [1] - blue, [2] - green

int main()
{
    /*
        m = value
        n = rows
        p = columns
    */
    int ***arr, m, n, p, i, j, k, state = 0;
    scanf("%d%d%d", &m, &n, &p);

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
                arr[i][j][k] = rand() % 3;

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
                
            }
        }
    }

    printf("%d", value);

    free(arr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **arr, x = 0, y = 0, elX = 0, elY = 0, i, j, sum = 0;

    scanf("%d%d", &x, &y);

    arr = (int **)malloc(x * y * sizeof(int));

    for (i = 0; i < x; i++)
    {
        printf("A[%d][null] = ", i);
        scanf("%d", &arr[i]);

        if (i == x - 1)
        {
            for (j = 0; j < y; j++)
            {
                printf("A[%d][%d] = ", i + 1, j);
                scanf("%d", &arr[j]);

                if (j == y - 1)
                    break;
            }
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d", arr[i * x + j]);
            if (arr[j][i] == arr[i][j])
            {
                printf("sum+1");
                sum++;
            }
            else
            {
                printf("Matrix are not symmetrical\n");
            }
        }
    }

    // for (i = 0; i < elX; i++)
    // {
    //     for (j = i + 1; j < elY; j++)
    //     {
    //         if (arr[j][i] == arr[i][j])
    //         {
    //             sum++;
    //         }
    //         else
    //         {
    //             printf("Matrix are not symmetrical\n");
    //         }
    //     }
    // }

    printf("%d\n", sum);
}
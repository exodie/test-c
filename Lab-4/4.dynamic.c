#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr, x, y, elX, elY, i, j, sum = 0;

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input y: ");
    scanf("%d", &y);

    // create array
    arr = (int**)malloc(sizeof(int*) * x);

    for (i = 0; i < x; i++) {
        arr[i] = (int *)malloc(sizeof(int) * y);
    }

    // запись данных в массив
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Input arr[i][j]: ");
            scanf("%d", &arr[i][j]);
        }

        printf("\n");
    }

    // Вывод массива
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf(" %i", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // Условие в цикле
    for (i = 0; i < x; i++) {
        for (j = i + 1; j < y; j++) {
            if (arr[i][j] == arr[j][i]) {
                sum++;
            } else {
                printf("Matrix are not symmetrical\n");
            }
        }
    }    

    printf("%d\n", sum);

    return 0;
}
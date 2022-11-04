#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr_test, x, y, elX, elY, i, j, sum = 0;

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input y: ");
    scanf("%d", &y);

    // create array
    arr_test = (int**)malloc(sizeof(int*) * x);

    for (i = 0; i < x; i++) {
        arr_test[i] = (int *)malloc(sizeof(int) * y);
    }

    // запись данных в массив
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Input arr[i][j]: ");
            scanf("%d", &arr_test[i][j]);
        }

        printf("\n");
    }

    // Вывод массива
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf(" %i", arr_test[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // Условие в цикле
    for (i = 0; i < x; i++) {
        for (j = i + 1; j < y; j++) {
            if (arr_test[i][j] == arr_test[j][i]) {
                sum++;
            } else {
                printf("Matrix are not symmetrical\n");
            }
        }
    }    

    printf("%d\n", sum);

    return 0;
}
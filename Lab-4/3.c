#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define L 6
#define M 7

int main()
{
    int arr[L][M];
    int i, j, h, state;

    // Заполнение матрицы случайными числами от 0 до 10.
    for (i = 0; i < L; i++) {
        for (j = 0; j < M; j++) {
            arr[i][j] = rand() % 12;
            printf(" %i", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    for (h = 0; h <= L - 1; h++) {
        for (i = 0; i <= L - 1; i++) {
            for (j = 0; j <= L - 1; j++) {
                if (arr[i][j] < arr[i][j + 1]) {
                    state = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = state;
                }
            }
        }
    }

    for (i = 0; i <= L - 1; i++) {
        for (j = 0; j <= M - 1; j++) {
            printf(" %i", arr[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
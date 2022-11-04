#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr_test, x, y, elX, elY;

    //arr[2][2] = { {1, 2}, {2, 1} }, 

    int i, j, isSym = 0;

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input y: ");
    scanf("%d", &y);

    arr_test = (int**)malloc(sizeof(int*) * x);

    for (i = 0; i < x; i++) {
        arr_test[i] = (int *)malloc(sizeof(int) * y);
    }

    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            arr_test[i][j] = rand() % 12;
            printf(" %i", arr_test[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for (i = 0; i < x; i++) {
        for (j = i + 1; j < y; j++) {
            if (arr_test[i][j] == arr_test[j][i]) {
                
            }
        }
    }    

    // for (i = 0; i < 2; i++) {
    //     for (j = i + 1; j < 2; j++) {
    //         if (arr[j][i] == arr[i][j]) {
    //             isSym++;
    //         } else {
    //             printf("Matrix are not symmetrical\n");
    //         }
    //     }
    // }

    printf("%d\n", isSym);

    return 0;
}
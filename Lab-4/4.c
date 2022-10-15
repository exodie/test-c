#include <stdio.h>
#include <stdlib.h>

void main() {
    int arr[2][2] = { {1, 2}, {2, 1} }, i, j, isSym = 0;

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 2; j++) {
            if (arr[j][i] == arr[i][j]) {
                isSym++;
            } else {
                printf("Matrix are not symmetrical\n");
            }
        }
    }

    printf("%d\n", isSym);
}
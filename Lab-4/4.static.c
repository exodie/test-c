#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[2][2] = {{1, 2}, {2, 1}}, i, j, sum = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf(" %i", arr[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 2; j++) {
            if (arr[i][j] == arr[j][i]) {
                sum++;
            } else {
                printf("Matrix are not symmetrical\n");
                return -1;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
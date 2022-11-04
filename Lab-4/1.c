#include <stdio.h>
#include <stdlib.h>

#define A 30
#define B 15

int main() {
    int a[A], b[B], i, j, state;

    printf("A[30] =");
    for (i = 0; i < A; i++) {
        a[i] = rand() % 50;
        printf(" %i", a[i]);
    }

    printf("\n");

    printf("B[15] =");
    for (j = 0; j < B; j++) {
        b[j] = rand() % 50;
        printf(" %i", b[j]);
    }

    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            if (a[i] != b[j]) {
                state += i;
            }
        }
    }

    printf("\nState = %d", state / A);

    return 0;
}
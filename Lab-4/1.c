#include <stdio.h>
#include <stdlib.h>

#define a_value 5
#define b_value 3

int main(void)
{
    int i, j;
    double sum = 0.0, value = 0.0;
    int A[a_value], B[b_value];

    for (i = 0; i < a_value; i++) {
        A[i] = rand() % 13;
        printf("%d ", A[i]);
    }

    printf("\n\n");

    for (i = 0; i < b_value; i++) {
        B[i] = rand() % 13;
        printf("%d ", B[i]);
    }

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (A[i] == B[j]) {
                break;
            } else if (j == 4) {
                sum += A[i];
                value++;
            }
        }
    }

    printf("%lf", sum / value);

    return 0;
}
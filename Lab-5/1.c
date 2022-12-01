#include <stdio.h>
#include <stdlib.h>

#define EL_A 10
#define EL_B 15

int * returnA() {
    int *a;
    a = (int*)malloc(EL_A * sizeof(int));

    printf("a =");
    for (int i = 0; i < EL_A; i++) {
        a[i] = rand() % 12;
        printf(" %d", a[i]);
    }

    printf("\n\n");

    return a;
}

int * returnB() {
    int *b;

    b = (int*)malloc(EL_B * sizeof(int));

    printf("b =");
    for (int i = 0; i < EL_B; i++) {
        b[i] = rand() % 13;
        printf(" %d", b[i]);
    }

    printf("\n\n");

    return b;
}

int main()
{

    int *a, *b, i, j;

    a = returnA();

    for (int i = 0; i < EL_A; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\n");
    b = returnB();

    for (int i = 0; i < EL_B; i++) {
        printf("%d ", b[i]);
    }

    int maxA = a[0], maxB = 0, a_idx = 0, b_idx = 0;

    // First max element in A
    for (i = 0; i < EL_A; i++)
    {
        if (a[i] > maxA)
        {
            maxA = a[i];
            a_idx = i;

            if (a[i] == maxA)
            {
                a[i] = 0;
                break;
            }
        }
    }

    // Last max element in B
    for (j = 0; j < EL_B; j++)
    {
        if (maxB < b[j] || maxB == b[j])
        {
            maxB = b[j];
            b_idx = j;
        }
    }

    printf("\nmaxA = %d\nmaxB = %d\na_idx = %d\nb_idx = %d\n", maxA, maxB, a_idx, b_idx);

    a[a_idx] = maxB;
    b[b_idx] = maxA;

    for (i = 0; i < EL_A; i++)
    {
        printf(" %i", a[i]);
    }

    printf("\n\n");

    for (j = 0; j < EL_B; j++)
    {
        printf(" %i", b[j]);
    }

    return 0;
}
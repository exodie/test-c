#include <stdio.h>
#include <stdlib.h>

#define EL_A 60
#define EL_B 85

int * returnA() {
    int *a;
    a = (int*)malloc(EL_A * sizeof(int));

    printf("a = \n");
    for (int i = 0; i < EL_A; i++) {
        a[i] = rand() % 12;
        printf("%i\t", a[i]);
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
        printf("%i\t", b[i]);
    }

    printf("\n\n");

    return b;
}

void show(int *array, int elements) {
    for (int i = 0; i < elements; i++)
    {
        printf("%i\t", array[i]);
    }

    printf("\n");
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

    printf("\n\nВывод A\n");
    show(a, EL_A);

    printf("\n\nВывод В\n");
    show(b, EL_B);

    return 0;
}
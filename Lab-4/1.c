#include <stdio.h>
#include <stdlib.h>

#define a_count 30
#define b_count 15

int main(void)
{
    double sum = 0.0, value = 0.0;
    int A[a_count], B[b_count];

    printf("Вывод массива А(30)");
    for (int i = 0; i < a_count; i++)
    {
        A[i] = rand() % 13;
        printf("%d ", A[i]);
    }

    printf("\n");

    printf("Вывод массива В(15)");
    for (int i = 0; i < b_count; i++)
    {
        B[i] = rand() % 13;
        printf("%d ", B[i]);
    }

    printf("\n");

    for (int i = 0; i < a_count; i++)
    {
        for (int j = 0; j < b_count; j++)
        {
            if (A[i] == B[j])
            {
                break;
            }
            else if (j == b_count - 1)
            {
                sum += A[i];
                value++;
            }
        }
    }

    printf("Среднее арифметическое: %lf", sum / value);

    return 0;
}
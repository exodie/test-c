#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

void f(int m, int n)
{
    int x;

    printf("f(%d, %d)\n", m, n);

    if (n >= 0 && m > 0)
    {
        if (n != 3 && m <= 3)
        {
            x = ((2 * m) / (n - 3));
            printf("X = %d", x);
        }

        if (m > 3)
        {
            x = (sqrt(m - 3) - n);
            printf("[M > 3] X = %d", x);
        }
    }
    else
    {
        printf("Error: X = %d", m + n);
    }
}

int main()
{
    int m, n;

    printf("Input M: ");
    scanf("%d", &m);
    printf("Input N: ");
    scanf("%d", &n);

    f(m, n);

    return 0;
}
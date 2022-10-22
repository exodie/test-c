#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    int m, n, x;
    scanf("%d%d", &m, &n);

    if (n > -5 && m != 0)
    {
        x = (5 / m) - (n / 5);
        printf("(5 / m) - (n / 5) => x = %d", x);
    }
    else if (n <= -5)
    {
        x = 3 * m + pow(n, 2);
        printf("3 * m + n^2 => x = %d", x);
    }
    else
    {
        x = 2 * m * n;
        printf("2 * m * n => x = %d", x);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    double x, y, eps = 0.00001, s = 0, fraction;
    scanf("%lf", &x);

    fraction = (1 / x);

    s = 2 * fraction;

    if (abs(x) > 1)
    {
        for (int i = 2; fraction * fraction >= eps * eps; i++)
        {
            printf("1: %lf\n", fraction);
            fraction = (1 / pow(x + i + 1, i + 1));
            printf("2: %lf\n", fraction);
            s += fraction;
        }

        y = log((x + 1) / (x - 1));

        printf("\ny = %.5lf\ns = %5.lf", y, s);
    } else {
        printf("error");
    }

    return 0;
}
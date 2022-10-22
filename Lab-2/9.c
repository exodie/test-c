#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    double p = 1,
           total;

    int i, j;

    for (i = 1; i <= 10; i++)
    {
        total = 0;

        for (j = 1; j <= 20; j++)
        {
            total += 1 / (i + pow(j, 2));
        }

        p *= total;
    }

    printf("now p = %lf", p);

    return 0;
}
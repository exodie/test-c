#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    int x, a, b;

    for (a = 1; a <= 99; a++)
    {
        for (b = 1; b <= 99; b++)
        {
            x = 2 * (a + b);

            if (x == (a * b))
            {
                printf("Value: %d\n", 10 * a + b);
            }
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    int x, y = 0;

    scanf("%d", &x);

    while (x != 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }

    printf("%d", y);

    return 0;
}
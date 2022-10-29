#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x, y = 0;

    printf("Input x: ");
    scanf("%d", &x);

    while (x != 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }

    printf("%d", y);
}
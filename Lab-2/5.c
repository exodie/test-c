#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac = 1, i = 1;

    while (fac < 100000 /* 10^5 */)
    {
        fac *= i;
        i++;
    }

    printf("[%d], [%d], [%d]", fac, i, fac / i);
}
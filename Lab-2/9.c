#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
     * s - Общее S
     * i - Первый цикл (Прохожусь по степеням n^sl)
     * j - Второй цикл (Присваиваю к степени саму степень)
     * n - натуральное число
     * sl - Возводимая степень
     */
    int s, i, j, n, sl;
    scanf("%d", &n);
    s = 0;
    sl = 1;

    for (i = 1; i <= n; i++)
    {
        sl = i;

        for (j = 1; j < i; j++)
        {
            sl *= i;
        }

        s += sl;
    }

    printf("%d", s);
}
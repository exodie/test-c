#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define E 0.00001

int fact(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
        return num * fact(num - 1);
}

int main()
{
    int counter = 1, znam;
    double input, sum = 1, value = 1, del = 1, prover, pi = 3.14; // input - x, counter - n
    if ((scanf("%lf", &input) == 0) || ((input < 0.1) || (input > 1)))
    {
        printf("input error\n");
        return 1;
    }

    printf("X:%lf\n", input);

    for (double i = E; i < value; counter++)
    {
        for (int i = counter; i > 0; i--) // столько раз,нассколько член ряда удален от начала
        {
            del = pow(-1, counter) * pow(input, 2) * del;
        }

        znam = fact(counter * 2);
        value = (del / znam);
        sum = value + sum;
        del = 1;
    }

    prover = cos(input);
    printf("Proverka=%lf\n", prover);
    printf("Summa=%lf\n", sum);
    printf("num = %d", counter);

    return 0;
}
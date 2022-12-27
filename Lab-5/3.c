#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    * a - value
    * b - value
    * n - count
    * *f - function
*/
double Integral(double a, double b, int n, double *f)
{
    double integ = 0;

    int k, count = 0;

    for (int i = 0; i < n; i++)
    {
        count++;
        if (i == 0 || i == n - 1)
        {
            k = 1;
            count = 0;
        }
        else if (count == 3)
        {
            k = 2;
            count = 0;
        }
        else
        {
            k = 3;
        }

        integ += 3 * (b - a) / (8 * n) * k * f[i];
    }

    return integ;
}

double *setTask(int type, double a, double b, int n)
{
    double *Y = (double *)malloc(n * sizeof(double));
    double delt = (b - a) / (double)n;

    switch (type)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            Y[i] = (2 * (a + i * delt) * (pow(((a + i * delt)), 2) + 1));
        }
        break;

    case 2:
        for (int i = 0; i < n; i++)
        {
            Y[i] = (exp(2 * (a + i * delt)) / 2 * (a + i * delt));
        }
        break;

    default:
        break;
    }

    return Y;
};

int main()
{
    int N = 30, j, m;
    printf("%lf \n", Integral(4, -1, N, setTask(1, 4, -1, N)));       // firstFc(4, -1, N)
    printf("%lf \n", Integral(3.5, 0.5, N, setTask(2, 3.5, 0.5, N))); // lastFc(3.5, 0.5, N)

    return 0;
}
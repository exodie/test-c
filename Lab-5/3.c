#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

double *Func1(double a, double b, int n)
{
    double *Y = (double *)malloc(n * sizeof(double));
    double delta = (b - a) / (double)n;
    for (int i = 0; i < n; i++)
    {
        Y[i] = (2 * (a + i * delta) * (pow(((a + i * delta)), 2) + 1));
    }

    return Y;
}

double *Func2(double a, double b, int n)
{
    double *Y = (double *)malloc(n * sizeof(double));

    double delta = (b - a) / n;
    for (int i = 0; i < n; i++)
    {
        Y[i] = (exp(2 * (a + i * delta)) / 2 * (a + i * delta)); 
    }

    return Y;
}

int main()
{
    int N = 30, j, m;
    printf("%lf \n", Integral(4, -1, N, Func1(4, -1, N)));
    printf("%lf \n", Integral(3.5, 0.5, N, Func2(3.5, 0.5, N)));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// n-размерность вектора
//  Ввод векторов
double *vector_X(int n)
{
    double *X;

    X = (double *)malloc(n * sizeof(double));

    for (int i = 0; i < 5; i++)
    {
        X[i] = rand() % 13;
    }

    return X;
}

double *vector_Y(int n)
{
    double *Y;

    Y = (double *)malloc(n * sizeof(double));
    for (int j = 0; j < n; j++)
    {
        Y[j] = rand() % 9;
    }

    return Y;
}

double *vector_Z(int n)
{
    double *Z;

    Z = (double *)malloc(n * sizeof(double));
    for (int j = 0; j < n; j++)
    {
        Z[j] = 0;
    }

    return Z;
}

// расчет элементов числителя
double *chisl1(double *X, double *Y, double *Z, int n, double value)
{
    double sumX = 0, sumX1 = 0, sumY1 = 0;

    for (int i = 0; i < n; i++) // Σx
        sumX += X[i];

    for (int j = 0; j < n; j++)
    {
        Y[j] *= (sumX * n);
        Z[j] = Y[j]; // * Y[j];//n*Σx*y
    }

    for (int j = 0; j < n; j++)
        Y[j] /= (sumX * n); // чистка массива

    for (int i = 0; i < n; i++)
        sumX1 += X[i]; // Σx

    for (int j = 0; j < n; j++)
        sumY1 += Y[j]; // Σy

    value = sumX1 * sumY1; // Σx*Σy

    printf("\n");
    for (int j = 0; j < n; j++)
    {
        Z[j] -= value;
    }

    return Z;
}

// расчет элементов знаменателя
double znam_x(double *X, int n, double value)
{
    double k = X[0], sumX = 0, sumX1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (X[i] > k)
        {
            k = X[i]; // максимальный элемент вектора Х, k
        }
        sumX += pow(X[i], 2); // Σ(x)^2
        sumX1 += X[i];
    }
    printf("\n");
    sumX1 = pow(sumX1, 2); //(Σx)^2
    value = k * (sumX - sumX1);
    return value;
}

double znam_y(double *Y, int n, double value)
{
    double p = Y[0], sumY = 0, sumY1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (Y[i] > p)
        {
            p = Y[i]; // максимальный элемент вектора Y, p
        }
        sumY += pow(Y[i], 2); // Σ(y)^2
        sumY1 += Y[i];
    }
    sumY1 = pow(sumY1, 2); //(Σy)^2

    value = p * (sumY - sumY1);
    return value;
}

int main()
{
    double R = 0, n = 30, j = 0;
    double value = 0, m = 0, v = 0;

    double *x = vector_X(n);
    double *y = vector_Y(n);
    double *z = vector_Z(n);

    znam_x(x, n, m);
    znam_y(y, n, v);

    double *chils = chisl1(x, y, z, n, value);

    R = sqrt(znam_x(x, n, m) * znam_y(y, n, v)); // знаменатель

    for (int j = 0; j < n; j++)
    {
        z[j] /= R;
        printf("[%lf]\n", z[j]);
    }
}
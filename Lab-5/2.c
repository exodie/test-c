#define _CRT_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// n-размерность вектора
//  Ввод векторов
void vektor_X(double X[5], int n)
{
    // double;
    printf("Vektor X\n");
    for (int i = 0; i < n; i++)
    {
        X[i] = rand() % 9;
        printf("%lf\n", X[i]);
    }
}

void vektor_Y(double Y[5], int n)
{
    printf("Vektor Y\n");
    for (int j = 0; j < n; j++)
    {
        Y[j] = rand() % 9;
        printf("%lf\n", Y[j]);
    }
}

void vektor_Z(double Z[5], int n)
{
    printf("Vektor Y\n");
    for (int t = 0; t < n; t++)
    {
        Z[t] = rand() % 3;
        printf("%lf\n", Z[t]);
    }
}

// расчет элементов числителя
double chisl1(double X[5], double Y[5], double Z[5], int n, double value)
{
    double sumX = 0, sumX1 = 0, sumY1 = 0;

    for (int i = 0; i < n; i++) // Σx
    {
        sumX += X[i];
    }

    for (int j = 0; j < n; j++)
    {

        Y[j] *= (sumX * n);
        Z[j] = Y[j]; // * Y[j];//n*Σx*y
        // printf("%lf\n", Z[j]);
    }

    for (int j = 0; j < n; j++)
    {

        Y[j] /= (sumX * n); // чистка массива
        // printf("%lf\n", Y[j]);
    }

    for (int i = 0; i < n; i++)
    {

        sumX1 += X[i]; // Σx
    }
    // printf("%lf\n", sumX);
    for (int j = 0; j < n; j++)
    {

        sumY1 += Y[j]; // Σy
    }
    // printf("%lf\n", sumY1);
    value = sumX1 * sumY1; // Σx*Σy

    // printf("%lf\n", value);
    printf("\n");
    for (int j = 0; j < n; j++)
    {

        Z[j] -= value;
        // printf("%lf\n", Z[j]);
    }

    return Z[5];
}

// расчет элементов знаменателя
double znam_x(double X[5], int n, double value)
{
    double k = X[0], sumX = 0, sumX1 = 0;
    for (int i = 0; i < n; i++)
    {

        if (X[i] > k)
        {
            k = X[i]; // максимальный элемент вектора Х, k
        }
        sumX += pow(X[i], 2); // Σ(x)^2
        // printf("%lf\n", sumX);
        sumX1 += X[i];
    }
    // printf("%lf\n", k);
    printf("\n");
    sumX1 = pow(sumX1, 2); //(Σx)^2
    // printf("%lf", sumX1);
    printf("\n");

    printf("\n");
    value = k * (sumX - sumX1);
    // printf("%lf", value);
    return value;
}

double znam_y(double Y[5], int n, double value)
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
    // printf("%lf\n", p);
    printf("\n");
    sumY1 = pow(sumY1, 2); //(Σy)^2

    value = p * (sumY - sumY1);
    // printf("%lf", value);
    return value;
}

int main()
{
    double R = 0, X[5], Y[5], Z[5], B[5], n = 5, G = 0, j = 0;
    double O = 0, L = 0, m = 0, v = 0;

    vektor_X(X, n);
    vektor_Y(Y, n);
    printf("\n");
    // chisl1(X, Y,Z, n, O);
    // printf("\n");
    znam_x(X, n, m);
    // printf("\n");
    znam_y(Y, n, v);
    // printf("\n");
    chisl1(X, Y, Z, n, O);

    // printf("\n");

    R = sqrt(znam_x(X, n, m) * znam_y(Y, n, v)); // знаменатель
    // printf("%lf\n ", R);

    // printf("\n");

    for (int j = 0; j < n; j++)
    {
        Z[j] /= R;
        printf("[%lf]\n", Z[j]);
    }
}
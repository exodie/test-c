#include <stdio.h>
#include <math.h>
#define EPS 1e-4

// Инициализация функции
float recurs(float x, float a, float tempS, int n);

// Реализация функции
float recurs(float x, float a, float tempS, int n)
{
    float chlenPosled = (pow(a, 2 * n - 1)) / ((2 * n - 1) * pow(2 * x + a, 2 * n - 1));
    tempS += chlenPosled;
    if (fabs(chlenPosled) > EPS)
    {
        n++;
        recurs(x, a, tempS, n);
    }
    else
        return tempS;
}

int main()
{
    int n = 1;
    float S, x, a, tempS = 0;
    float check;

    printf("Enter x: ");
    scanf("%f", &x);
    do
    {
        printf("\nEnter a: ");
        scanf("%f", &a);
    } while (pow(a, 2) > pow(2 * x + a, 2));

    S = log(x) + 2 * recurs(x, a, tempS, n);
    printf("S = %f\n", S);
    check = log(x + a);
    printf("ln(%.3f + %.3f) = %f\n", x, a, check);

    return 0;
}

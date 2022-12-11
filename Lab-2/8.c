#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "russian");
    double eps = 0.000001;
    double pi = 3.1415926;
    double sum = 0, x, pred, next;
    int n;
    printf("Введите значение в пределах: 0.1<=x<=0.8, х=");
    scanf("%lf", &x);
    if (x >= 0.1 && x <= 0.8)
    {
        n = 1;
        pred = x;
        next = 0;

        while (fabs(pred - next) > eps)
        {
            pred = next;
            next = pow(x, n) * cos(n * pi / 3.0) / (double)n;
            sum = sum + next;
            n++;
        }
        printf("Сумма ряда равна %.6lf\n", sum);
        double check = -0.5 * log(1 - 2 * x * cos(pi / 3.0) + x * x);
        printf(" Проверка функции %.6lf\n", check);
    }
    else
    {
        printf("Данное значения не входит в диапозон \n");
    }
    return 0;
}
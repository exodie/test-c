#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main()
{
    double a, b;

    scanf("%lf", &a, &b);

    double s = (sin(pow(a, 3)) + 2 * pow(cos(b), 2)) / (sqrt(2.5 * a + 3 * b + sqrt(2) * log(b)));
    printf("%lf\n", s);

    return 0;
}
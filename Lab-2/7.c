#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

int main() {
    double x, y, eps = 0.00001, f, fraction, factorial; 
    scanf("%lf", &x);

    fraction = pow(x, 3);

    f = x - fraction;

    factorial = 1;

    for (int i = 5; fraction * fraction >= eps * eps; i++) {
        factorial *= i;
        fraction = (pow(-1, i) * pow(x, 2 * i + 1)) / ((2 * i + 1) * factorial);
        f += fraction;
    }

    y = sin(x);

    printf("\ny = %.5lf\nf = %5.lf", y, f);

    return 0;
}
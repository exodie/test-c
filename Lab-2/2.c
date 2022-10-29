#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

void main()
{
    int K, a, b;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    K = (((2 * exp(a)) / (3 * pow(b, 2) * sqrt(b))) * ((pow(cos(a / (2 * b + 1)), 2))) / (1 + (1 / log(a + b))));
    printf("%d", K);
}
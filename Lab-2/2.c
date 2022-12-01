#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double s = 0.0;
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Incorrect value!\n");
    }
    else
    {
        s = (sin(pow(a, 3)) + 2 * pow(cos(b), 2) / (sqrt((2.5 * a) + (3 * b) + (sqrt(2) * log(b)))));
        printf("%lf", s);
    }

    return 0;
}
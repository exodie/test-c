#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 5, d;
    double a = .5, b;

    printf("d = ");
    scanf("%d", &d);
    printf("b = ");
    scanf("%f", &b);

    a += b - 2;
    printf("[a += b -2] => a = %lf\n", a);

    c += 1;
    printf("[c += 1] => c = %d\n", c);

    d = c - a + d;
    printf("[d = c - a + d] => d = %d\n", d);

    a *= c;
    printf("[a *= c] => a = %lf\n", a);

    c -= 1;
    printf("[c -= 1] => c = %d\n", c);

    a /= 10;
    c /= 2;
    b -= 1;
    d *= (c + b + a);

    printf("[a /= 10] & [c /= 2] & [b -= 1] & [d *= (c + b + a)] =>\n { a = %lf, c = %d, b= %lf, d = %d };", a, c, b, d);

    return 0;
}
/*
d = 5
b = 15
[a += b -2] => a = -1.500000
[c += 1] => c = 6
[d = c - a + d] => d = 12
[a *= c] => a = -9.000000
[c -= 1] => c = 5
[a /= 10] & [c /= 2] & [b -= 1] & [d *= (c + b + a)] =>
 { a = -0.900000, c = 2, b= -1.000000, d = 1 };
*/
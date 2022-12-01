#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d;
    int c = 5;
    double b;
    double a = 5;
    printf("b=");
    scanf("%lf", &b);
    printf("d=");
    scanf("%d", &d);
    printf("a=a+b-2\n");
    a = a + b - 2;
    printf("a=%f b=%f c=%d d=%d\n", a, b, c, d);
    printf("c=c+1, d=c-a+d\n");
    c = c + 1, d = c - a + d;
    printf("a=%f b=%f c=%d d=%d\n", a, b, c, d);
    printf("a=a*c, c=c-1\n");
    a = a * c, c = c - 1;
    printf("a=%f b=%f c=%d d=%d\n", a, b, c, d);
    printf("a=a/10, c=c/2, b=b-1, d=d*(c+b+a)\n");
    a = a / 10, c = c / 2, b = b - 1, d = d * (c + b + a);
    printf("a=%f b=%f c=%d d=%d\n", a, b, c, d);
    system("pause");
    return 0;
}
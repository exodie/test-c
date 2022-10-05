#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p, c;
    int *a, b;
    float *x, y = 3.5;
    double *m, n;
    a = &b;
    printf("b = ");
    scanf("%d", a);

    printf("a = %p\t*a = %d\tb = %d\n", a, *a, b);

    printf("Output all addresses: [*p = %p\tc = %p\t*a = %p\tb = %p\n*x = %p\ty = %p\t*m = %p\tn = %p]\n");

    p = (char *)a;
    c = *p;
    *p = *(p + 3);
    *(p + 3) = c;

    printf("p = %p\tc = %d\ta = %p\tb = %d\n", p, c, a, b);
    x = &y;
    a = (int *)x;
    *a = *x;
    printf("a = %p\t*a = %d\tx = %p\t*x = %f\ty = %f\n", a, *a, x, *x, y);

    a = &b;
    y = 12345, 6789;

    printf("x = %p\t*x = %f\ty = %f\n", x, *x, y);

    p = (char *)x;
    c = *p;
    *p = *(p + 3);
    printf("p = %p\tc = %d\tx = %p\ty = %f\n", p, c, x, y);

    m = &n;
    printf("m = %p\t*m = %lf\tn = %lf\n", m, *m, n);

    n = 5.5;
    printf("m = %p\t*m = %lf\tn = %lf\n", m, *m, n);

    b = n = y = 1.7;
    printf("b = %d\ty = %f\tn = %lf\n", b, y, n);
    printf("*a = %d\tn = %p\t*x = %f\t*m = %lf\n", *a, *x, *m);

    m++;
    m++; //* Так, потому что ++ = +1;

    printf("n = %lf\tn = %p\tm = %p\n", n, &n, m);

    *m = (float)*a - n + (int)*x;

    printf("TRUE\n");

    // ? Значений всех переменных, value / types?
    // printf("All values: [*a = %d\tb = %d\t*x = %f\ty = %f\t*m = %lf\tn = %lf]\n", *a, b, *x, y, *m, n);
    printf("*a = %d\tb = %d\n", *a, b);
    printf("*x = %f\ty = %f\n", *x, y);
    // ! *m not output`ing...
    printf("n = %lf\n", n);
    printf("*m = %lf\n", &*m); // ?

    system("pause");
    return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1;
    float b = 2;
    double c = 3;

    // ->
    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;

    void *p4;

    // addresses var
    printf("a: int: start address %p | extent %d\n", &a, sizeof(a));
    printf("b: int: start address %p | extent %d\n", &b, sizeof(b));
    printf("c: int: start address %p | extent %d\n", &c, sizeof(c));

    // addresses pointer
    printf("p1: pointer: start addresses %p | extent %d\n", &p1, sizeof(p1));
    printf("p2: pointer: start addresses %p | extent %d\n", &p2, sizeof(p2));
    printf("p3: pointer: start addresses %p | extent %d\n\n", &p3, sizeof(p3)); // ? Почему используем %d, ведь у нас double а не int

    // -> value
    printf("p1: %p related value %d\n", p1, *p2);
    printf("p2: %p related value %f\n", p2, *p2);
    printf("p3: %p related value %lf\n\n", p3, *p3);

    // used ->
    printf("a = %d\tb = %f\tc = %lf\n", a, b, c);

    *p1 = 5;
    *p2 *= *p1;
    *p3 = sqrt(*p3);

    printf("a = %d\tb = %f\tc = %lf\n", a, b, c);
    printf("*p1 = %d\t*p2 = %f\t*p3 = %lf\n\n", *p1, *p2, *p3);

    // assigment ->
    p1 = (int *)p2;
    p3 = (double *)p2;
    p4 = p2;
    printf("p1 = %p\tp2 = %p\tp3 = %p\tp4 = %p\n", p1, p2, p3, p4);
    printf("*p1 = %d\t*p2 = %f\t*p3 = %lf\t*(float*)p4 = %f\n\n", *p1, *p2, *p3, *(float *)p4); // ? Почему нет ошибки...

    // changed value ->
    p1++;
    p3--;
    printf("p1 = %p\tp2 = %p\tp3 = %p\n", p1, p2, p3);
    printf("*p1 = %d\t\t*p2 = %f\t*p3 = %lf\n", *p1, *p2, *p3);

    p1 -= 4;
    p3 = (double *)&a - 1;
    printf("p1 = %p\tp2 = %p\tp3 = %p\n", p1, p2, p3);
    printf("*p1 = %d\t*p2 = %f\t*p3 = %lf\n", *p1, *p2, *p3);

    system("pause");
    return 0;
}
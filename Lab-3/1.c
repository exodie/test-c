#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    int a = 1;
    float b = 2;
    double c = 3;

    // ->
    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;

    void *p4;

    printf("a: int: start address %p | extent %d\n", &a, sizeof(a));
    printf("b: int: start address %#p | extent %d\n", &b, sizeof(b));
    printf("c: int: start address %#p | extent %d\n", &c, sizeof(c));

    return 0;
}
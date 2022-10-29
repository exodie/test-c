#include <stdio.h>
#include <stdlib.h>

void main() {
    int x, s;

    scanf("%d", &x);

    for (int i = 0; i <= x / 2; i++) {
        i % 2 && !(x % i) ? printf("%d ", i) : i;
    }
}
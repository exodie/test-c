#include <stdio.h>
#include <stdlib.h>

// 3 * x + 2 > 0

void main() {
    float a, b, x;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    if (a == 0) {
        if (b == 0) {
            printf("x = 0");
        }
    } else {
        if (a != 0) {
            if (b != 0) {
                printf("Success: x = %lf", ((-b) * (-b)) / a);
            } else if (b < 0) {
                printf("Success [b < 0]: x = %lf", b / a);
            }
        }
    }
}
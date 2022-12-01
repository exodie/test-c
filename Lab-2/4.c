#include <stdio.h>
 
int main(void) {
    // 2 for() потому что нужно найти двузначных произведение
    for (int i=1; i <= 9; ++i) {
        for (int j=0; j <= 9; ++j) {
            if (2*(i+j) == i*j) {
                printf("%d\n", 10 * i + j);
            }
        }
    }
    return 0;
}
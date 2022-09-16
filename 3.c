#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int main()
{
    char c;
    unsigned char uc;
    int i;
    unsigned u;
    short s;
    long l;
    float f;
    double d;

    printf("sizeof(c) = %d\tsizeof(uc) = %d\tsizeof(i) = %d\tsizeof(u) = %d\tsizeof(s) = %d\tsizeof(l) = %d\tsizeof(f) = %d\tsizeof(d) = %d\t",
           sizeof(c), sizeof(uc), sizeof(i), sizeof(u), sizeof(s), sizeof(l), sizeof(f), sizeof(d));

    uc = c = CHAR_MAX;
    printf("[CHAR_MAX] : c = %d, uc = %d\n", c, uc);

    c++;
    uc++;
    printf("[CHAR_MAX++] : c = %d, uc = %d\n", c, uc);

    uc = c = CHAR_MIN;
    printf("[CHAR_MIN] : c = %d, uc = %d\n", c, uc);

    uc = c = UCHAR_MAX;
    printf("[UCHAR_MAX] : c = %d, uc = %d\n", c, uc);

    c++;
    uc++;
    

    return 0;
}
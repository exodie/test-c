#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

// limits.h -> CHAR_MAX, UCHAR_MAX (MIN), INT_MAX (MIN), SHRT_MAX (MIN) ...limited consts.

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
    printf("UCHAR_MAX++] : c = %d, uc = %d\n", c, uc);

    uc = c = -5;
    printf("[-5] : c = %d, uc = %d", c, uc);

    c = -5;
    uc = 5;
    printf("[char and unsigned char -5 > 5] : %d\n\n", c > uc);

    // printf("[TEST] c = %d, s = %d, SHRT_MAX=%d, uc = %d", c, sizeof(s), SHRT_MAX, uc);

    c = (char)s = SHRT_MAX;
    uc = s;
    printf("[SHRT_MAX] : c = %d, uc = %d, s = %d\n", c, uc, s); // error, conversion from short int to char (diap: -32768 : 32767) :(

    s++;
    printf("[SHRT_MAX++] : s = %d\n", s);

    c = s;
    uc = s;
    printf("%d : c = %d, uc = %d\n", SHRT_MIN, c, uc);

    s = 0;
    c = s;
    uc = s;
    printf("[0] : c = %d, uc = %d, s = %d\n", c, uc, s);

    i = INT_MAX;
    l = i;
    u = i;
    printf("[INT_MAX] : i = %d, u = %u, i = %ld\n", i, u, l);

    i++;
    l++;
    u++;
    printf("[INT_MAX++] : i = %d, u = %u, i = %ld\n", i, u, l);

    i = INT_MIN;
    l = i;
    u = i;
    printf("[INT_MIN] : i=%d u=%u l=%ld\n", i, u, l);

    u = UINT_MAX;
    i = u;
    l = u;
    printf("[UINT_MAX] : i=%d u=%u l=%ld\n", i, u, l);

    u = i = -5;
    printf("-5 : i=%d u=%u\n", i, u);

    i = -5;
    u = 5;
    printf("[int and unsigned int -5>5] : %d\n", i > u);

    c = -5;
    u = 5;
    printf("[char and unsigned int -5>5] : %d\n\n", c > u);

    i = 5.1;
    printf("[i=5.1] : i=%d\n", i);

    i = 5.9;
    printf("[i=5.9] : i=%d\n", i);

    d = f = FLT_MAX;
    printf("[FLT_MAX] : f=%g d=%g\n", f, d);

    d = f = FLT_MIN;
    printf("[FLT_MIN] : f=%g d=%g\n", f, d);

    d = f = FLT_EPSILON;
    printf("[FLT_EPSILON] : f=%g d=%g\n", f, d);

    f = 1e10;
    printf("[1e10] : f=%f\n", f);

    f = 1e11;
    printf("[1e11] : f=%f\n", f);

    f = 1234567890;
    printf("[1234567890] : f=%f\n", f);

    d = DBL_MAX;
    printf("[DBL_MAX] : d=%g\n", d);

    d = DBL_MIN;
    printf("[DBL_MIN] : d=%g\n", d);

    d = DBL_EPSILON;
    printf("[DBL_EPSILON] : d=%g\n", d);

    d = 1e15 + 1;
    printf("[1e15+1] : d=%lf\n", d);

    d = 1e16 + 1;
    printf("[1e16+1] : d=%lf\n", d);

    f = 10000 * 100000;
    f += 1;
    f -= 4 * 250000000;
    printf("1 : f=%f\n", f);

    f = 10000 * 100000 + 1 - 4 * 250000000;
    printf("[1] : f=%f\n", f);

    d = 10000 * 100000 + 1 - 4 * 250000000;
    printf("[1] : d=%lf\n", d);

    d = 1e20 * 1e20 + 1000 - 1e22 * 1e18;
    printf("[1000] : d=%lf\n", d);

    system("pause");
    return 0;
}

/*
    We have any limit constants in .c,
    FLT_EPSILON, DBL_EPSILON, LDBL_EPSILON
*/
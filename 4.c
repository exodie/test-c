// 1 var.

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // for use math fc

void F(int x, int y); // type void потому что я ничего не возвращаю (можно конечно возвращать числа, но в падлу)

void F(int x, int y)
{


    if (x > 0)
    {
        x += y;
        printf("x > 0 => x = %d\n", x);
    }
    else if (x <= 0)
    {
        //! can`t use printf (x *= y)
        (y < 0) ? x *= y : printf("Error: y > 0");

        printf("x <= 0 && y < 0 => x = %d\n", x);
    }
    else
    {
        printf("None of the conditions were met => x = %d\n", x *= 5);
    };
}

#define _USE_MATH_DEFINES

void Z(int x);

void Z(int x)
{

    
    int z;
    double _x = log1p(sqrt(abs(x))) / tan(pow(2.71828182845904523536, -x));

    z = (x * x) - cos(_x);

    // test print`s
    printf("%d\n", z);
    printf("%lf\n", cos(_x));
    printf("%lf\n", _x);
}

int main()
{
    /* example #1
        int x, y;

        scanf("%d", &x);
        scanf("%d", &y);
        printf("Input data: x = %d, y = %d\n", x, y);

        F(x, y);
    */

    /* example #2
       Z(15);
    */

    // printf("%d", sqrt(-1));

    return 0;
}
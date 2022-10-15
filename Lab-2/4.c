// 14 var.

/*
*    Написать 9 программ согласно номеру индивидуального варианта.
    В первой программе вычислить значение функции, используя условную
    операцию «?:».
*    Во второй программе вычислить значение по указанной формуле, исполь-
    зуя функции математической библиотеки. Перед написанием программы требу-
    ется вычислить область определения функции (ООФ), в программе после ввода
*    аргументов проверить их принадлежность ООФ.
    В третьей программе использовать вложенный условный оператор.
*    В четвертой программе смоделировать арифметический цикл с помощью
    оператора цикла for.
*    В пятой и шестой программах использовать циклы while или do ... while.
*    В седьмой и восьмой программах вычислить бесконечную сумму с задан-
    ной точностью, используя рекуррентные зависимости.
*   В девятой программе использовать конструкцию «цикл в цикле».
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

// Задание номер 1
void F_fc(int m, int n)
{
    int x;

    printf("m = %d\t", m);
    printf("n = %d\n", n);

    if (n > -5 && m != 0)
    {
        x = (5 / m) - (n / 5);
        printf("(5 / m) - (n / 5) => x = %d", x);
    }
    else if (n <= -5)
    {
        x = 3 * m + pow(n, 2);
        printf("3 * m + n^2 => x = %d", x);
    }
    else
    {
        x = 2 * m * n;
        printf("2 * m * n => x = %d", x);
    }
}

void S_fc(double a, double b)
{
    double s = (sin(pow(a, 3)) + 2 * pow(cos(b), 2)) / (sqrt(2.5 * a + 3 * b + sqrt(2) * log(b)));
    printf("%lf\n", s);
}

/*
    Value: 36
    Value: 44
    Value: 63
*/
int four_fc()
{
    int x, a, b;

    for (a = 1; a <= 99; a++)
    {
        for (b = 1; b <= 99; b++)
        {
            x = 2 * (a + b);

            if (x == (a * b))
            {
                printf("Value: %d\n", 10 * a + b);
            }
        }
    }
}

// * reverse number
void six_fc(int x)
{
    int y = 0;

    while (x != 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }

    printf("%d", y);
}

/*
 * i - произведение сомножителей
 * j - сумма дробей i
 */
void nine_fc()
{
    double p = 1,
           total;

    int i, j;

    for (i = 1; i <= 10; i++)
    {
        total = 0;

        for (j = 1; j <= 20; j++)
        {
            total += 1 / (i + j * j);
        }

        p *= total;
    }

    printf("now p = %lf", p);
}

int main()
{
    int first_p, second_p, three_p;
    double first_p_d, second_p_d;

    printf("Input your data: ");
    // scanf("%d%d%d", &first_p, &second_p, &three_p);
    scanf("%lf%lf", &first_p_d, &second_p_d);

    // F_fc(first_p, second_p);
    S_fc(first_p_d, second_p_d);
    // four_fc();
    six_fc(first_p);
    // nine_fc();

    return 0;
}

/*
int x, a, b;

    for (;;) {
        scanf("%d", &a);
        scanf("%d", &b);

        if (a != 0 && b != 0) {
            if (a < 100 && a >= 10 && b < 100 && b >= 10) {
                printf("a = %d\tb = %d\n", a, b);

                x = 2 * (a + b);

                if (x == a * b) {
                    printf("x is true!\n");
                } else {
                    printf("x != a * b\n");
                }
            } else {

            }
        } else {
            printf("a == 0 && b == 0\n");

            return 0;
        }
    }
*/
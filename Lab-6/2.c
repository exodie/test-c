#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[256]; // example: "45 % cos(60) / sin(30) + tan(90) * 2 % 10";
    fgets(str, sizeof(str), stdin);
    char *new_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
    char *sym = (char *)malloc(40 * sizeof(char));

    sym = strtok(str, " ");

    while (sym != NULL)
    {
        if (*sym == '%')
        {
            sym = "mod";
        }

        if (sym[0] == 't')
        {
            int size = 0;
            char *num = (char *)malloc(size * sizeof(char));

            for (int i = 0; i < strlen(sym) + 1; i++)
            {
                if (sym[i + 4] == ')')
                    break;

                num = (char *)realloc(num, ++size * sizeof(char));
                num[i] = sym[i + 4];
            }

            char *sin_cos = (char *)malloc(15 + strlen(num) * 2);
            sin_cos = strcat(sin_cos, "(sin(");
            sin_cos = strcat(sin_cos, num);
            sin_cos = strcat(sin_cos, ") / cos(");
            sin_cos = strcat(sin_cos, num);
            sin_cos = strcat(sin_cos, "))");

            sym = sin_cos;
        }

        new_str = strcat(new_str, sym);
        new_str = strcat(new_str, " "); // приписывает ct к s; возвращает s.

        sym = strtok(NULL, " "); // выделяет из строки s лексему, ограниченную символами из ct.
    }

    printf("Complete string = %s\n", new_str);

    return 0;
}
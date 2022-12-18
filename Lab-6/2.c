#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[256];// = "2 + 5 % cos(0.5) / sin(1) + tan(12) % 10 + tan(12) % 10";
    fgets(str, sizeof(str), stdin);
    char *new_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
    char *leks = (char *)malloc(40 * sizeof(char));

    leks = strtok(str, " ");

    while (leks != NULL)
    {
        if (*leks == '%')
        {
            leks = "mod";
        }

        if (leks[0] == 't')
        {
            int size = 0;
            char *num = (char *)malloc(size * sizeof(char));

            for (int i = 0; i < strlen(leks) + 1; i++)
            {
                if (leks[i + 4] == ')')
                    break;

                num = (char *)realloc(num, ++size * sizeof(char));
                num[i] = leks[i + 4];
            }

            char *sin_cos = (char *)malloc(15 + strlen(num) * 2);
            sin_cos = strcat(sin_cos, "(sin(");
            sin_cos = strcat(sin_cos, num);
            sin_cos = strcat(sin_cos, ") / cos(");
            sin_cos = strcat(sin_cos, num);
            sin_cos = strcat(sin_cos, "))");

            leks = sin_cos;
        }

        new_str = strcat(new_str, leks);
        new_str = strcat(new_str, " "); // приписывает ct к s; возвращает s.

        leks = strtok(NULL, " "); // выделяет из строки s лексему, ограниченную символами из ct.
    }

    printf("new_str = %s\n", new_str);

    return 0;
}
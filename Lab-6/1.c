#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    /**
     * i - для цикла for
     * j - приравнивание итераций i
     * k - Кол-во символов
     * state - Кол-во слов проходящих проверку
     */
    int i, j = 0, count_char, state = 0;
    char string[1000];

    gets(string);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] != ' ' && string[i] != ',' && string[i] != '.' && string[i] != ':' && string[i] != '-') {
            j = i;
        } else {
            count_char = 0;
            while (string[j] != ' ' && string[j] != ',' && string[j] != '.' && string[j] != ':' && string[j] != '-' && j != -1) {
                count_char++;
                j--;
            }

            if (count_char >= 5) {
                state++;
            }
        }
    }

    printf("%d\n", state);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j = 0, k, a = 0;
    char str[1000];

    scanf("%s", str); // принимаем текст

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != ':' && str[i] != '-') // находим слово(я взял что слова в тексте розделены только такими знаками
            j = i;                                                                             // хочеш можно добавить свои)
        else
        {
            k = 0; // считает количество букв
            while (str[j] != ' ' && str[j] != ',' && str[j] != '.' && str[j] != ':' && str[j] != '-' && j != -1)
            {
                k++;
                j--;
            }
            if (k >= 5) // если количество больше равно 5 - записываем
                a++;
        }
    }

    printf("Answer: %d\n", a);
}
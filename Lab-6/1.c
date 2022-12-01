
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 0, k, a = 0;
    char str[1000];

    gets(str); //принимаем текст

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != '.' && str[i] != ',')
        {
            j = i;
        }
        else
        {
            k = 0; //считает количество букв
            while (str[j] != ' ' && str[j] != ',' && str[j] != '.' && str[j] != ':' && str[j] != '-' && j != -1)
            {
                k++;
                j--;
            }
            if (k >= 5) {
                a++;
            }
        }
    }

    printf("Value: %d\n", a);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j = 0, count_char, count_word = 0;
    char str[1000];

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != ':' && str[i] != '-')
            j = i;
        else
        {
            count_char = 0;
            while (str[j] != ' ' && str[j] != ',' && str[j] != '.' && str[j] != ':' && str[j] != '-' && j != -1)
            {
                count_char++;
                j--;
            }

            if (count_char >= 5)
            {
                count_word++;
            }
        }
    }

    printf("Answer: %d\n", count_word);
}
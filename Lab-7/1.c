#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 100

int main()
{
    char string[LEN];

    FILE *file, *output;
    file = fopen("1/input-1.txt", "r+");
    output = fopen("1/output-1.txt", "w");

    if (file != NULL && output != NULL)
    {
        printf("File input-1.txt & output-1.txt is not NULL!\n");

        while (fgets(string, LEN, file))
        {
            // fprintf(stdout, "%s", string);

            if (*string != ' ' && isupper(*string))
            {
                printf("[Need] => %s", string);
            }
            else
            {
                printf("[Not-need] => %s", string);
                fputs(string, output);
            }
        }
    }
    else
    {
        fprintf(stderr, "Do not open file input-1.txt");
        return 1;
    }

    fclose(file);
    fclose(output);

    return 0;
}
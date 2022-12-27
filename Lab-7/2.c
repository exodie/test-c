#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    FILE *in, *out;

    in = fopen("2/input.txt", "r+");
    out = fopen("2/output.txt", "w");

    if (in == NULL)
    {
        printf("error");
        return 10;
    }

    while (fscanf(in, "%d", &x) != EOF)
    {
        if (x % 2 == 0)
        {
            fprintf(out, "%d ", 2 * x);
        }
        else
        {
            fprintf(out, "%d ", x);
        }
    }

    char buffer2[256];

    fclose(out);
    fclose(in);

    in = fopen("2/input.txt", "w");
    out = fopen("2/output.txt", "r+");
    while (!feof(out))
    {
        if (fgets(buffer2, sizeof(buffer2), out) != NULL)
        {
            fputs(buffer2, in);
            remove("2/output.txt");
        }
        else
        {
            printf("false");
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}
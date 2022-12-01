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
        if (x % 2 == 0) {
            fprintf(in, "\n");
            fprintf(in, "%d", 2 * x);
        } else {
            fprintf(out, "%d\t", x);
        }
    }

    return 0;
}
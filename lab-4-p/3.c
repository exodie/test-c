#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int lines = 7;
    const int columns = 9;

    int a[lines][columns];
    int sum[lines] = {0};

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            a[i][j] = rand() % 10;
            sum[i] += a[i][j];
        }
    }

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf(" %i", a[i][j]);
        }

        printf(" Sum: %d\n", sum[i]);
    }

    return 0;
}
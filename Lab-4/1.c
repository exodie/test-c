#include <stdio.h>
int main(void)
{
    int i, j, sum = 0;
    int ar[5] = {11, 1, 2, 3, 22};
    int ar2[5] = {11, 1, 2, 3, 22};

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (ar[i] == ar2[j]) {
                sum += ar2[j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
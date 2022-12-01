#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void creatBin(FILE *file, int number);
void printBin(FILE *file);
void changeBin(FILE *file);
int main()
{
    setlocale(LC_ALL, "Rus");

    FILE *f;
    f = fopen("3/input.bin", "wb");

    creatBin(f, 10);
    fclose(f);

    printf("\nБыло\n");
    f = fopen("3/input.bin", "rb");
    printBin(f);
    fclose(f);

    f = fopen("3/input.bin", "rb");
    changeBin(f);
    fclose(f);

    printf("\nСтало\n");
    f = fopen("3/input.bin", "rb");
    printBin(f);
    fclose(f);

    return 0;
}

void creatBin(FILE *file, int number)
{
    int x = 0;
    rewind(file);

    for (int y = 0; y < number; y++)
    {
        x = rand() % 10;
        fwrite(&x, 1, sizeof(int), file);
    }
}

void printBin(FILE *file)
{
    int x;
    rewind(file);

    while (fread(&x, sizeof(int), 1, file))
        printf("%d ", x);
}

void changeBin(FILE *file)
{
    int x = 0;
    int *arr = malloc(sizeof(int) * 1);
    int polog = 0;
    int otriz = 0;
    rewind(file);

    while (fread(&x, sizeof(int), 1, file))
    {
        if (x == 0)
        {
            continue;
        }
        if (x > 0)
        {
            arr[polog + otriz] = x;
            polog++;
        }
        else
        {
            arr[polog + otriz] = x;
            otriz++;
        }
    }

    fclose(file);
    file = fopen("3/input.bin", "wb");

    fwrite(&otriz, sizeof(int), 1, file);
    for (int y = 0; y < polog + otriz; y++)
    {
        fwrite(&arr[y], sizeof(int), 1, file);
    }
    
    fwrite(&polog, sizeof(int), 1, file);
}

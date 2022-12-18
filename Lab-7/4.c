#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char str[], char ptr[]);
void read(FILE *f, char wallet[10], int type, int summa);
void takeOff(FILE *f, int value, int summa);
void put(FILE *f, int value);

struct BanksInfo {
    char wallet[10];
    int type;
    int money;
};

int find(char str[], char ptr[])
{
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i, k = 0; ptr[k] != '\0' && str[j] == ptr[k]; j++, k++)
            ;
        if (ptr[k] == '\0')
            return 1;
    }

    return 0;
}

void takeOff(FILE *f, int value, int summa)
{
    f = fopen("4/banks.txt", "r+");
    int result;

    if (f != NULL)
    {
        while (!feof(f))
        {
        }
    }
}

void put(FILE *f, int value)
{
    f = fopen("4/banks.txt", "r+");
    int result;

    if (f != NULL)
    {
        while (!feof(f))
        {

        }
    }
}

void read(FILE *f, char wallet[10], int type, int summa)
{
    char money[7] = "Money: ", *buffer2, *maga, *maga2, str[100], buffer[100];
    int magaMod, result;

    if (f != NULL)
    {
        while (!feof(f))
        {
            fgets(str, 100, f);
            if (find(str, wallet))
            {
                strcpy(buffer, str);
            }
        }
    }

    buffer2 = strstr(buffer, money);

    if (buffer2 != NULL)
    {
        maga = (char *)(buffer2 + 7);
    }

    maga2 = strstr(maga, ", Date: 206122022");

    *maga2 = '\0';

    magaMod = atoi(maga);

    switch (type)
    {
    case 0:
        // takeOff(f, magaMod, summa); // take off money from wallet
        result = magaMod - summa;
        *(buffer2 + 7) = result;
        printf("Mod: %d\n", magaMod);
        printf("Result: %d\n", result);

        // build string
        // printf("Char: %d", magaMod); 
        fprintf(f, "%d\n", result);

        fclose(f);
        break;

    case 1:
        // put(f, summa);

        result = magaMod + summa;
        *(buffer2 + 7) = result;
        printf("Mod: %d\n", magaMod);
        printf("Result: %d\n", result);
        fclose(f);
        break;

    default:
        break;
    }

    printf("test maga buffer: %c", *(buffer2));

    fclose(f);
}

int main()
{
    FILE *f = fopen("4/banks.txt", "r");

    int summa, type;
    char wallet[10]; /* 1 - положить; 0 - снять */

    printf("Input wallet: ");
    scanf("%s", wallet);

    printf("Input sum: ");
    scanf("%d", &summa);

    printf("Input type: [0 - Take || 1 - Put]: ");
    scanf("%d", &type);

    read(f, wallet, type, summa);

    return 0;
}
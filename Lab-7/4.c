#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getLineSize(char str[], int max);
int findChar(char str[], char ptr[]);
void show(FILE *f, int wallet, int type, int summa);
// int takeOff(FILE *f, int value);
// int put(FILE *f, int value);

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

// int get_line_size(char string[], int max)
// {
//     int cymbol;
//     int length;
//     for (length = 0; (cymbol = getchar()) != EOF && cymbol != '\n' && length < max - 1; length++)
//     {
//         string[length] = cymbol;
//     }
//     string[length] = '\0';
//     return length;
// }

// int takeOff(FILE *f, int value) {
//     f = fopen("4/banks.txt", "r+");

//     if (f != NULL) {
//         while (!feof(f)) {
            
//         }
//     }
// }

void show(FILE *f, int wallet, int type, int summa)
{
    char name[100] = "20002";
    char money[100] = "Money: ";
    char str[100];
    char buffer[100];

    // printf("Name: ");
    // get_line_size(name, 100);

    if (f != NULL)
    {
        while (!feof(f))
        {
            fgets(str, 100, f);
            if (find(str, name))
            {
                strcpy(buffer, str);
            }
        }
    }
    // printf("%s", buffer);

    char *buffer2, *maga, *maga2;
    
    buffer2 = strstr(buffer, "Money: ");

    if (buffer2 != NULL) {
        maga = (char*)(buffer2+7);
    }

    maga2 = strstr(maga, ", Date: 206122022");

    *maga2 = '\0';

    int magaMod;
    magaMod = atoi(maga);

    printf("%d", magaMod);

    int result;
    result = magaMod - summa;

    *(buffer2+7) = result;

    printf("Result: %d", result);

    fclose(f);
}

int main()
{
    FILE *f = fopen("4/banks.txt", "r");

    int summa, type, wallet; /* 1 - положить; 0 - снять */

    printf("Input wallet: ");
    scanf("%d", &wallet);

    printf("Input sum: ");
    scanf("%d", &summa);

    printf("Input type: [0...1]: ");
    scanf("%d", &type);

    show(f, wallet, type, summa);

    return 0;
}
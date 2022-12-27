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
  int cnt = 0, cnt2 = 0;
  rewind(file);

  printf("\n");
  while (fread(&x, sizeof(int), 1, file))
  {
    if (x > 0 && x % 3 != 0)
    {
      printf("a\t");
      arr[cnt2 + cnt] = x;
      cnt2++;
    }
    else if (x > 0 && x % 3 == 0)
    {
      printf("b\t");
      //   arr[cnt+cnt2] = NULL;
      cnt++;
    }
  }

  fclose(file);
  file = fopen("3/input.bin", "wb");
  for (int y = 0; y < cnt + cnt2; y++)
  {
    fwrite(&arr[y], sizeof(int), 1, file);
  }
  printf("\nвсего: %d", cnt);
}
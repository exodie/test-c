
#include <stdio.h>
#include <stdlib.h>
#define N 5 // Изменить на свое значение

// Если использовать динамический массив и авто-заполнение, то врятли получится получить эффект соседей.
int main()
{
    /**
     * arr - Массив содержащий 45 элементов
     * i - переменная для прохождения итераций
     * min - хранение миним. значения из массива
     * max - хранение макс. значения из массива
     * sum - необходимая по заданию сумма найденных элементов
     */

    /**
     * Альт. версия под динамический массив (не советую)
     * int *arr;
     * arr = (int*)malloc(N * sizeof(int));
     * 
     * for (i = 0; i < N; i++) {
     *  arr[i] = rand() % 15;
     *  printf(" [%d]", arr[i]);
     * }
     */
    int arr[N] = {1, 2, 3, 5, 4}, /* {1, 2, 3, 5, 4} => sum = 5 || {2, 3, 1, 5, 4} = sum = 0 (потому что элементы соседи) */
        i, min = 0, max = 0, sum = 0;

    printf("\n");

    for (i = 1; i < N; i++)
    {
        if (arr[i] < arr[min])
        {
            min = i;
        }
        else if (arr[i] > arr[max])
        {
            max = i;
        }

        // Если встретятся "соседи", то приостанавливаем программу. Потому что сумма будет равна правому соседу.
        if (arr[i - 1] == min && arr[i + 1] == max)
        {
            printf("Elements sosedi!\n");
            break;
        }

        if (arr[i] == min || arr[i] == max)
        {
            printf("Incorrect array element\n");
            break;
        }
    }

    printf("A[min] = %d, A[max] = %d\n", arr[min], arr[max]);

    if (min > max)
    {
        i = min;
        min = max;
        max = i;
    }

    for (i = min + 1; i < max; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);

    // free(arr); // clear memory

    return 0;
}
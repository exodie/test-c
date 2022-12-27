#include <stdlib.h>
#include <stdio.h>

int main()
{
    /**
     * [x, y] - [x, y] промежуток
     * arr = [] - массив
     * arrEl = [] - кол-во элементов массива
     * state = any?:value - Переменная для записывания в неё значений
     */
    int x, y, *arr, el, state, stateIdx, oldStateIdx, i, j;

    // input items
    printf("Введите кол-во элементов массива = ");
    scanf("%d", &el);

    printf("Введите диапазон между Х и У = ");
    scanf("%d%d", &x, &y);

    arr = (int *)malloc(el * sizeof(int));

    state = el; // for find later min. values

    if (y <= 0)
    {
        printf("y <= 0!\n");
        system("PAUSE");
    }
    else
    {
        for (i = 0; i < el; i++)
        {
            printf("A[%d] = ", i);
            scanf("%d", &arr[i]);

            if (i == el - 1)
            {
                for (i = 0; i < el; i++)
                {
                    if (arr[i] > 0)
                    {
                        state = arr[i];
                        stateIdx = i;
                        printf("State & StateIdx: [%d %d]\n", state, stateIdx);

                        if (state > x && state < y)
                        {
                            for (j = stateIdx; j < el - 1; j++)
                            {
                                arr[j] = arr[j + 1];
                            }

                            el--;

                            printf("%d %d %d\n", state, stateIdx, arr[j]);

                            for (i = 0; i < el; i++)
                            {
                                printf("{%i}\t", arr[i]);
                            }
                        }
                        else
                        {
                            printf("\nМассив не имеет данных элементов\n");
                        }
                    }
                    else
                    {
                        printf("Негативное значение!\n");
                    }
                }
            }
        }
    }

    free(arr);

    return 0;
}
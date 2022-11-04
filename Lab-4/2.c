#include <stdlib.h>
#include <stdio.h>

int main()
{
    /**
     * [rangeX, rangeY] - [x, y] промежуток
     * arr = [] - массив
     * arrEl = [] - кол-во элементов массива
     * state = any?:value - Переменная для записывания в неё значений
     */
    int rangeX, rangeY, *arr, el, state, stateIdx, oldStateIdx, i, j;

    // input items
    printf("Input value in arr[el] = ");
    scanf("%d", &el);

    printf("Input value in rangeX & rangeY = ");
    scanf("%d%d", &rangeX, &rangeY);

    arr = (int *)malloc(el * sizeof(int));

    state = el; // for find later min. values

    if (rangeY <= 0)
    {
        printf("rangeY <= 0, break program!\n");
        system("PAUSE");
    }
    else
    {
        for (i = 0; i < el; i++)
        {
            printf("A[%d] = ", i);
            scanf("%d", &arr[i]);

            // all valid values
            if (i == el - 1)
            {
                printf("\n\nOutput all elements: ");

                for (i = 0; i < el; i++)
                {
                    printf("\n\narr[%d] = [ %d, %d ]\n", el, arr[i], i);

                    // нашёл минимальный положительный, а нужно минимальный положительный который входит в [x, y]...
                    if (arr[i] > 0)
                    {
                        state = arr[i];
                        stateIdx = i;
                        printf("State & StateIdx: [%d %d] ", state, stateIdx);

                        if (state > rangeX && state < rangeY)
                        {
                            // Удаляю необходимый элемент массива по индексу
                            for (j = stateIdx; j < el - 1; j++)
                            {
                                arr[j] = arr[j + 1];
                            }

                            // Выравниваю индексы массива
                            el--;

                            printf("\nYessss, minus 1!\n");
                            printf("%d %d %d\n", state, stateIdx, arr[j]);

                            for (i = 0; i < el; i++)
                            {
                                printf("%i\n", arr[i]);
                            }
                        }
                        else
                        {
                            printf("\n\nArr haven`t element = [%d, %d]\n", rangeX, rangeY);
                        }
                    }
                    else
                    {
                        printf("Negative value!\n");
                    }
                }

                // printf("Minimal positive element: %d", state);
            }
        }
    }

    free(arr);

    return 0;
}
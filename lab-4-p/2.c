#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, el, i, j, *state, value = 0, state_value = 0;

    printf("Input kol-vo elements: ");
    scanf("%d", &el);

    // create dynamic array
    arr = (int *)malloc(el * sizeof(int));

    // completion array
    for (i = 0; i < el; i++)
    {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = 0; i < el; i++, j++)
    {
        if ((arr[i] % 2) != 0 && arr[i] < 0)
        {
            state_value = arr[i];
            value += 1;
            state = (int *)malloc(value * sizeof(int));
            // problems
            state[j] = state_value;

            printf("state_value: %d\n", state_value);
        }
    }

    // printf("All value: %d", value);

    for (i = 0; i < value; i++)
    {
        printf("%d\n", state[i]);
    }

    free(arr);   // clear memory arr
    free(state); // clear memory state

    return 0;
}
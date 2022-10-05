#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
    int *a, n, i;

    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) printf("%d", a[i]);

    free(a);

    

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int countDetails;
    int t1, t2, t3, tSumm;

    printf("Enter count details: ");
    scanf("%d", &countDetails);

    while (countDetails > 0)
    {
        printf("Time_1 =  ");
        scanf("%d", &t1);

        printf("Time_2 =  ");
        scanf("%d", &t2);

        printf("Time_3 =  ");
        scanf("%d", &t3);

        tSumm += t1 + t2 + t3;
        countDetails--;
        printf("Next:\n");
    }

    printf("Summ time: %d", tSumm);

    return 0;
}
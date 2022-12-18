#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int damkaXY, peshkaXY_1, peshkaXY_2;

    printf("Enter damka coord xy : ");
    scanf("%d", &damkaXY);

    printf("Enter peshka 1 coord xy : ");
    scanf("%d", &peshkaXY_1);

    printf("Enter peshkal 2 coord xy : ");
    scanf("%d", &peshkaXY_2);

    int mod1 = abs(damkaXY - peshkaXY_1);
    int mod2 = abs(damkaXY - peshkaXY_2);

    if (damkaXY != peshkaXY_1 || damkaXY != peshkaXY_2)
    {
        if (mod1 % 9 == 0 || mod1 % 11 == 0)
        {
            printf("Peshka 1 destroyed \n");
        }

        if (mod2 % 9 == 0 || mod2 % 11 == 0)
        {
            printf("Peshka 2 destroyed\n");
        }
        else
        {
            printf("No one is destroyed!\n");
        }
    }
    else
        printf("ERROR");

    system("pause");
    return 0;
}

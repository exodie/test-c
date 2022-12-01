#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dx, dy, p1x, p1y, p2x, p2y;
    printf("input DaMka position x[1..8]\n");
    scanf("%d", &dx);
    printf("input damka position y[1..8]\n");
    scanf("%d", &dy);
    printf("input WaWka1 position x[1..8]\n");
    scanf("%d", &p1x);
    printf("input WaWka1 position y[1.8]\n");
    scanf("%d", &p1y);
    printf("input WaWka2 position x[1..8]\n");
    scanf("%d", &p2x);
    printf("input WaWka2 position y[1.8]\n");
    scanf("%d", &p2y);
    if (abs(p1x - dx) == abs(p1y - dy) && (p1x != 8 || p1y != 8 || p1x != 1 || p1y != 1))
    {
        printf("DaMka can eat Peshka1 ");
        dx = p1x + 1;
        dy = p1y + 1;
        if (abs(p2x - dx) == abs(p2y - dy) && (p2x != 8 || p2y != 8 || p2x != 1 || p2y != 1))
            printf("and DaMKa can eat Peshka2 ");
    }
    else if (abs(p2x - dx) == abs(p2y - dy) && (p2x != 8 || p2y != 8 || p2x != 1 || p2y != 1))
    {
        printf("DaMKa can eat Peshka2 ");
        dx = p2x + 1;
        dy = p2y + 1;
        if (abs(p1x - dx) == abs(p1y - dy) && (p1x != 8 || p1y != 8 || p1x != 1 || p1y != 1))
            printf("and DaMka  can eat WaWka1 ");
    }
    else
    {
        printf("i can not eat 1 and 2\n");
        printf("Coords:\n");
        printf("Lady: [%d, %d]\n", dx, dy);
        printf("Pawn-1: [%d, %d]\n", p1x, p1y); // пешки...
        printf("Pawn-2: [%d, %d]\n", p2x, p2y);
    }

    return 0;
}
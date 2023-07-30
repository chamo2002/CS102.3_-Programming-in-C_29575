#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 5;
    int x, y;

    for (x = 1; x <= rows; x++)
        {
        for (y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
        }

    return 0;
}

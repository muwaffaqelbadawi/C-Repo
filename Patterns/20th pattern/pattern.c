#include "stdio.h"

void Num(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i + j >= row)
            {
                printf("%d", j);
            }

            // printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int row = 5;
    Num(row);

    return 0;
}
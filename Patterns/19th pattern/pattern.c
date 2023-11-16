#include "stdio.h"

void Num(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= (row - i + 1); j--)
        {
            printf("%d ", j);
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
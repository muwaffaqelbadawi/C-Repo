#include <stdio.h>

void SqrX(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == i || j == 1 || j == row || j == (row - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int row = 10;
    SqrX(row);

    return 0;
}
#include <stdio.h>

void Z_Logic(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == (row - i + 1))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int row = 5;
    Z_Logic(row);

    return 0;
}
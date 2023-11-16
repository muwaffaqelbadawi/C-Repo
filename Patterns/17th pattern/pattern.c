#include <stdio.h>

void E_Logic(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || i == (row + 1) / 2)
                printf("*");
            else
            {
                if (j == 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}

void E(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j == 1 || i == 1 || i == row || i == (row + 1) / 2)
                printf("*");
            else
                printf(" ");
        }
    }
    printf("\n");
}

int main()
{
    int row = 5;
    // E_Logic(row);
    E_Logic(row);

    return 0;
}
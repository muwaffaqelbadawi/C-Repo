#include <stdio.h>

void SpaceShip(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void ReverseSpaceShip(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int k = rows; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 2; i <= rows; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }

        for (int j = rows; j >= i; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    // for (int i = rows - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
}

int main()
{
    int rows = 5;
    SpaceShip(rows);
    ReverseSpaceShip(rows);

    return 0;
}
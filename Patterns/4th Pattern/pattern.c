#include <stdio.h>

void UpSideDownPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }

        for (int j = rows; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void UpSideDownPyramidLogic(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Pyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int k = rows; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void PyramidLogic(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int k = rows; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Logic(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j + i <= rows)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void Logic_Gate(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int rows = 5;
    // UpSideDownPyramid(rows);
    UpSideDownPyramidLogic(rows);
    // Pyramid(rows);
    // Logic(rows);
    // Logic_Gate(rows);
    PyramidLogic(rows);

    return 0;
}
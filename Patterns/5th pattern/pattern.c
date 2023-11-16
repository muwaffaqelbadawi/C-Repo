#include <stdio.h>

void Diamond(int rows)
{
    /*
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
    */

    /*
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
    */

    for (int i = 1; i <= rows; i++)
    {
        // for (int space = rows; space >= i; space--)
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--)
    {
        // for (int space = 0; space <= rows - i; space++)
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*
        for (int i = 2; i <= rows; i++)
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

    */
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

int main()
{
    int rows = 5;
    Diamond(rows);

    // Logic(rows);

    return 0;
}
#include <stdio.h>

void X(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row)
            {
                if (j > 1 && j < row)
                    printf(" ");

                else
                    printf("*");
            }

            else if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    printf("*");
                else
                    printf(" ");
            }

            else if (i == (row + 1) / 2)
            {
                if (j == (row + 1) / 2)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}

void Seven(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf(" ");
        }

        for (int j = row; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 1; i <= row; i++)
    {
        for (int l = 1; l <= row; l++)
        {
            if (i + l <= row)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    
}

int main()
{
    int row = 5;
    // X(row);
    Seven(row);

    return 0;
}
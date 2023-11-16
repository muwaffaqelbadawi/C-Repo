#include <stdio.h>

void Square(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i > 1 && i < row)
            {
                if (j > 1 && j < row)
                    printf(" ");

                else
                    printf("*");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}

void Spaces(int row)
{
    for (int i = 1; i < row; i++)
    {
        if ((i % 2) == 0)
            printf("*");
        else
            printf(" ");
    }
}





int main()
{
    int row = 10;
    // Square(row);
    Spaces(row);

    return 0;
}

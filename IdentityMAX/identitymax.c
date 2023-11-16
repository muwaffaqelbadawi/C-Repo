

#include <stdio.h>

void IdentityMAX(int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
                printf("%d ", 1);
            else
                printf("%d ", 0);
        }
        printf("\n");
    }
}

int main()
{
    int row = 4;
    int column = 4;

    IdentityMAX(row, column);

    return 0;
}

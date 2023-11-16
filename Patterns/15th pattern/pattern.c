#include <stdio.h>

void X_Logic(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j == i || j == (row - i + 1))
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
    X_Logic(row);

    return 0;
}
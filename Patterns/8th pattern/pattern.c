#include<stdio.h>

void CharTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows + 1 ) - i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
}


void CharTriangleLogic(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 5;
    // CharTriangle(rows);
    CharTriangleLogic(rows);

    return 0;
}

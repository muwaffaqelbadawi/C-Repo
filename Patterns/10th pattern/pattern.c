#include <stdio.h>

void NumberTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}


void UpSDNumberTriangle(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}



void InverseNumberTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 6;
    // NumberTriangle(rows);
    // UpSDNumberTriangle(rows);
    InverseNumberTriangle(rows);

    return 0;
}

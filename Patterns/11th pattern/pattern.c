#include <stdio.h>

void RepetetiveNumberTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}



int main()
{
    int rows = 5;
    RepetetiveNumberTriangle(rows);

    return 0;
}
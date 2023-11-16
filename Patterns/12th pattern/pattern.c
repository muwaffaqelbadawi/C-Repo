#include<stdio.h>

void NumberPattern(int rows)
{
    int init = 0;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", init + j);
            if (j == i)
                init += j;
        }
        printf("\n");

    }
}

void NumberPatternLogic(int rows)
{
    int num = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
                num ++;
        }
        printf("\n");

    }
}

int main()
{
    int rows = 5;
    // NumberPattern(rows);
    NumberPatternLogic(rows);

    return 0;
}
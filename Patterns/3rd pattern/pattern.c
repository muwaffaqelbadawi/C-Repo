#include <stdio.h>

void RightTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            // if (j > n - i)
            //     printf("*");
            // else
            //     printf(" ");
        }
        printf("\n");
    }
}

void Triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    RightTriangle(n);

    // Triangle(n);

    return 0;
}
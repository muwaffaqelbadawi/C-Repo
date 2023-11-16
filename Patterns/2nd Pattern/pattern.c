#include <stdio.h>

void HalfStarPMyWay(int n)
{
    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - k; j++)
            printf("*");
        printf("\n");
        k += 1;
    }
}

void Way1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
            printf("*");
        printf("\n");
    }
}

void Way2(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    int n = 5;

    // HalfStarPMyWay(n);
    // Way1(n);
    Way2(n);

    return 0;
}
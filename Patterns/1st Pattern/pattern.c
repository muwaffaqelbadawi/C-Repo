#include <stdio.h>

void HalfStarP(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    int n = 5;

    HalfStarP(n);

    return 0;
}

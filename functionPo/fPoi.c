

#include <stdio.h>
#include <math.h>
// #include <stdlib.h>

int compare(int a, int b)
{
    if (a > b)
        return -1;
    else
        return 1;
};

int absoluteCompare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    else
        return -1;
};

void bubbleSort(int *A, int n, int (*compare)(int, int))
{
    int a, b, temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            };
        };
    };
};

int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4};
    int n = sizeof(A) / sizeof(int);
    bubbleSort(A, n, absoluteCompare);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
};


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compareq(const void *a, const void *b)
{
    int A = (*(int *)a);
    int B = (*(int *)b);
    // return A - B;
    // return B - A;

    return abs(A) - abs(B);
};

int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4};
    int n = sizeof(A) / sizeof(int);
    qsort(A, n, sizeof(int), compareq);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
};
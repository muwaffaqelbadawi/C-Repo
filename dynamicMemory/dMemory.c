

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n;
    printf("Enter the size of there array\n");
    scanf("%d", &n);

    int *A = (int *)malloc(n * sizeof(int)); // Dynamically allocated array
    // int *A = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    };
    // int *B = (int *)realloc(A, 2 * n * sizeof(int));
    // int *B = (int *)realloc(A, (2 / n) * sizeof(int));
    // int *A = (int *)realloc(A, 0); // equevellant to free(A)
    int *B = (int *)realloc(NULL, n * sizeof(int)); // equevellant to malloc
    printf("prev block address = %d, new block address = %d\n", A, B);
    // free(A);
    // A[5] = 44474747;

    // for (int i = 0; i < 2 * n; i++)
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", A[i]);
        printf("%d\n", B[i]);
    };

    // int var;
    // int *p;

    // p = (int *)malloc(sizeof(int));
    // *p = 10;
    // free(p);

    // p = (int *)malloc(20 * sizeof(int));
    // *p = 20;
}

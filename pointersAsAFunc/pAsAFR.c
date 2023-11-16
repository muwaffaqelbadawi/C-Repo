

#include <stdio.h>
#include <stdlib.h>

void helloWorld()
{
    printf("Hello World\n");
}

int *Add(int *a, int *b)
{
    // printf("address of a is %d, address of b is %d\n", &a, &b);

    // int *c = (int *)malloc(sizeof(int));
    // *c = (*a) + (*b);
    int c = (*a) + (*b);

    return &c;
};

int main()

{
    int a = 1, b = 2;

    int *ptr = Add(&a, &b);

    // printf("address of a is %d, address of b is %d\n", &a, &b);

    helloWorld();
    printf("Sum = %d\n", *ptr);
};
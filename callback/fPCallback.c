

#include <stdio.h>

void A()
{
    printf("Hello");
};

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back function that ptr point to
};

int main()
{
    // int (*p)() = A;
    // B(p);
    B(A);
};

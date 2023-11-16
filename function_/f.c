

#include <stdio.h>

// Traditional increment method:
void increment(int a)
{
    a += 1;
}

// Pointers incremented method:
void p_increment(int *p)
{
    *p += 1;
}

int main()

{
    int a;
    a = 10;
    increment(a);
    printf("This is the false incremented value of a is %d\n", a);

    p_increment(&a); // you have to pass the value in the location of integer a
    printf("This is the true incremented value of a is %d\n", a);
}


#include <stdio.h>

// void helloWorld()
void helloWorld(char *name)
{
    // printf("Hello World\n");
    printf("Hello %s\n", name);
}

int Add(int a, int b)
{
    int c = a + b;
    return c;
};

int main()

{
    int c;
    int (*p)(int, int);
    // p = &Add;
    p = Add;

    // void (*ptr)();
    void (*ptr)(char *);
    ptr = helloWorld;
    ptr("Muwaffaq");

    // c = (*p)(2, 3)
    // printf("Sum = %d\n", c);
};
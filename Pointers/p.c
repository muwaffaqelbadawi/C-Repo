

#include <stdio.h>
int main()

{
    int m = 1; // declaration and assignment of integer m

    int *p; // integer pointer
  
    p = &m; // point to location of m integer in the memory

    int **d;
    d = &p;
    // *d = p;

    int ***n;
    // n = &d;
    *(*n) = *d;

    // int f;
    // f = 7;
    // *d = &f;

    // char *q;
    // q = &b;
    // *q = 'e'; // Dereferencing

    // int *r;
    // // r = &u;
    // char *i;
    // i = (char *)r; // typecasting

    // void *w; // Generic Pointer
    // char b = 'a'; // This is a char

    printf("%d\n", m);        // integer m
    printf("%d\n", *(*d));    // dereferencing to m
    printf("%d\n", *(*(*n))); // dereferencing to m

    // *(*d) = 5;
    // printf("%d\n", m);

    // *(*(*n)) = 6;
    // printf("%d\n", m);

    // printf("%d\n", *d);

    // *d = p;
    // printf("%d\n", *d);

    // **d = *p + 1;

    // *d = p + 1;
    // printf("%d\n", *d);
    // printf("%d\n", *(*d));

    // int u = 1027; // declaration and assignment of integer u

    // char str[] = "beee"; // This is string undefined size

    // printf("%d\n", w);
    // printf("%d\n", w + 1);

    // printf("%d\n", *i);
    // printf("%d\n", m);     // This is the value of integer m
    // printf("%d\n", *p);    // This variable points to the value of integer m in the memory
    // printf("%d\n", &m);    // This gives me the location where integer m is located
    // printf("%d\n", p);     // This gives me the location of m in the memory as pointer points to
    // printf("%d\n", p + 1); // This fuction gives me the lolcation of next memory block after integer m is stored
    // printf("%c\n", b);

    // printf("%d\n", &b);
    // printf("%d\n", q + 1);
    // printf("%d\n", sizeof(q));

    // printf("%s\n", *q); // This variable points to the value of String b in the memory

    // printf("%d\n", sizeof(int));  // This function gives me the size of integer
    // printf("%d\n", sizeof(char)); // This function gives me the size of character
    // // printf("%d\n", sizeof(double)); // This function gives me the size of double
    // // printf("%d\n", sizeof(long));   // This function gives me the size of long
    // printf("%d\n", sizeof(b)); // This function gives me the size of static char b (4 chars)

    // *p = b;
    // printf("%d\n", m);
}
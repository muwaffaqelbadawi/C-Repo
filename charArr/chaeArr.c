

#include <stdio.h>
#include <string.h>

void listArr(const char *myArr)
{
    while (*myArr != '\0')

    {
        printf("%c", *myArr);
        myArr++;
    }
    printf("\n");
}

int main()

{
    char myArr[] = "Hello";
    listArr(myArr);
}
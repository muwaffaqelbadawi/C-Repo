

#include <stdio.h>
#include <string.h>

int main()

{
    char someArr[8] = {'S', 'Q', 'L', 'J', 'A', 'V', 'A', '\n'};

    char *somepointer;
    somepointer = someArr;

    int len_someArr = sizeof(someArr) / sizeof(char);

    printf("%d\n", len_someArr);     // len_someArr = 8
    printf("%d\n", strlen(someArr)); // strlen(someArr) = 9

    // for (int i = 0; i < len - 1; i++)
    // {
    //     printf("someArr %d char is %c\n", i, someArr[i]);
    // }

    // for (int i = 0; i < strlen(someArr) - 2; i++)
    // {
    //     printf("someArr %d char is %c\n", i, someArr[i]);
    // }

    // printf("someArr %d char is %c\n", 4, someArr[]);

    // printf("someArr 1st char is %c\n", someArr[0]);
    // printf("someArr 2nd char is %c\n", someArr[1]);
    // printf("someArr 3rd char is %c\n", someArr[2]);
    // printf("someArr 4th char is %c\n", someArr[3]);
    // printf("someArr 5th char is %c\n", someArr[4]);
    // printf("someArr 6th char is %c\n", someArr[5]);
    // printf("someArr 7th char is %c\n", someArr[6]);

    // printf("somepointer 1st char is %c\n", somepointer[0]);
    // printf("somepointer 2nd char is %c\n", somepointer[1]);
    // printf("somepointer 3rd char is %c\n", somepointer[2]);
    // printf("somepointer 4th char is %c\n", somepointer[3]);
    // printf("somepointer 5th char is %c\n", somepointer[4]);
    // printf("somepointer 6th char is %c\n", somepointer[5]);
    // printf("somepointer 7th char is %c\n", somepointer[6]);

    // printf("somepointer 1st char is %c\n", *(somepointer + 0));
    // printf("somepointer 2nd char is %c\n", *(somepointer + 1));
    // printf("somepointer 3rd char is %c\n", *(somepointer + 2));
    // printf("somepointer 4th char is %c\n", *(somepointer + 3));
    // printf("somepointer 5th char is %c\n", *(somepointer + 4));
    // printf("somepointer 6th char is %c\n", *(somepointer + 5));
    // printf("somepointer 7th char is %c\n", *(somepointer + 6));
}
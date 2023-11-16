#include <stdio.h>

void checkBalance(char exp[], int len_exp)
{

    for (int i = 0; i < len_exp; i++)
    {
        printf("%c ", exp[i]);
    }
}



int main()
{
    char exp[] = "{()()}";

    int len_exp = sizeof(exp) - 1;
    checkBalance(exp, len_exp);

    return 0;
}
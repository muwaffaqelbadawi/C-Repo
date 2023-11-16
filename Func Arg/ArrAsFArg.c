

#include <stdio.h>

void print(char *Garbage)
{
    int i = 0;

    // while (Garbage[i] != '\0')
    // while (*(Garbage + i) != '\0') // has some problem 
    while (*Garbage != '\0')
    {
        printf("%c", Garbage[i]);
        // i++;
        Garbage++;
    }
    printf("\n");
}

int main()
{
    char Garbage[50] = "Hola";
    print(Garbage);
}
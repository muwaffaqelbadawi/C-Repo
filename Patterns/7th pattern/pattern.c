#include <stdio.h>

void CharTriangle(int char1, int char2)
{
    for (int i = char1; i <= char2; i++)
    {
        for (int j = char1; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
} 


void CharTriangleLodic(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
} 


int main()
{
    int char1 = 65;
    int char2 = 69;

    int rows = 5;
    // CharTriangle(char1, char2);
    CharTriangleLodic(rows);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main()

{

    char JohnDoe[5] = "JOHN"; // size is 5

    char JohnDoa[5] = {'J', 'O', 'H', 'N', '\0'}; // size is 5

    char name[5]; // size is 5

    name[0] = 'J';
    name[1] = 'O';
    name[2] = 'H';
    name[3] = 'N';
    name[4] = '\0';

    int len = strlen(name);
    int lenJohn = strlen(JohnDoe);
    int lenDoa = strlen(JohnDoa);

    printf("The name is %s\n", name);
    printf("The length of name is %d\n", len);        // length of name
    printf("The size of name is %d\n", sizeof(name)); // size of name

    printf("The name is %s\n", JohnDoe);
    printf("The length of name is %d\n", lenJohn);       // length of John Doe
    printf("The size of name is %d\n", sizeof(JohnDoe)); // size of John Doe

    printf("The name is %s\n", JohnDoa);
    printf("The length of name is %d\n", lenDoa);        // length of John Doa
    printf("The size of name is %d\n", sizeof(JohnDoa)); // size of John Doa
}
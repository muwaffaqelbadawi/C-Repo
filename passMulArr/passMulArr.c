

// void passMulArr(int *passArr[3])
void passMulArr(int *passArr[2][2])
{
}

#include <stdio.h>
int main()

{
    int passArr[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {8, 9}, {1, 2}};

    int passArr_[100][2][2] = {
        {{1, 2}, {4, 5}},
        {{1, 2}, {4, 5}},
    };
    // passMulArr(passArr);
    passMulArr(passArr_);
}

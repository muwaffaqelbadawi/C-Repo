

#include <stdio.h>
int main()

{
    int multiArr[3][2][2] = {{{1, 2}, {4, 5}},
                             {{7, 8}, {0, 1}},
                             {{3, 4}, {6, 7}}

    };

    // printf("%d\n%d\n%d\n", multiArr, *multiArr, multiArr[0]);
    // printf("%d\n", *(multiArr[0][1] + 1)); // 5
    // printf("%d\n", *(multiArr[0][0] + 1)); // 2
    // printf("%d\n", *(multiArr[1][0] + 1)); // 8
    // printf("%d\n", *(multiArr[0][1] + 0)); // 4
    // printf("%d\n", *(multiArr[1] + 1));
    // printf("%d\n", *(multiArr[1] + 2));
    // printf("%d\n", *multiArr);
    // printf("%d\n", *(multiArr + 1));
    printf("%d\n", multiArr);       // 3D Arr
    printf("%d\n", *(multiArr));    // 2D Arr
    printf("%d\n", *(*(multiArr))); // 1D Arr
};

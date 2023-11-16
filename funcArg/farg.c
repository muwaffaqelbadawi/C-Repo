

#include <stdio.h>

int sumOfTheElements(int *nums, int lenList)
{
    int sum = 0;

    for (int i = 0; i < lenList; i++)
    {
        sum += nums[i];
    }
    return sum;
}

int count(int *nums, int lenList)
{
    int sum = 0;

    for (int i = 0; i < lenList; i++)
    {
        sum++;
    }
    return sum;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6};
    int lenList = sizeof(nums) / sizeof(nums[0]);
    int total_num = count(nums, lenList);
    int sum = sumOfTheElements(nums, lenList);

    printf("The total number of elements in the array is %d\n", total_num);
    printf("sum of array elements are equal to %d\n", sum);
}
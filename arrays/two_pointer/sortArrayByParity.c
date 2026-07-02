#include <stdlib.h>

int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int* result = (int*)malloc(numsSize * sizeof(int));
    int left = 0;
    int right = numsSize - 1;
    int i = 0;

    while (i < numsSize && left <= right)
    {
        if (nums[i] % 2 == 0)
        {
            result[left] = nums[i];
            left = left + 1;
        }
        else
        {
            result[right] = nums[i];
            right = right - 1;
        }
        i = i + 1;
    }

    *returnSize = numsSize;
    return result;
}
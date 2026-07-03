int* sortArrayByParityII(int* nums, int numsSize, int* returnSize)
{
    int oddIndex = 1;

    for (int evenIndex = 0; evenIndex < numsSize; evenIndex = evenIndex + 2)
    {
        if (nums[evenIndex] % 2 == 1)
        {
            while (nums[oddIndex] % 2 == 1)
            {
                oddIndex = oddIndex + 2;
            }
            int temp = nums[evenIndex];
            nums[evenIndex] = nums[oddIndex];
            nums[oddIndex] = temp;
        }
    }

    *returnSize = numsSize;
    return nums;
}
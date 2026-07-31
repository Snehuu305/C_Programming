int minimumSwaps(int* nums, int numsSize) {
    int start = 0;
    int end = numsSize - 1;
    int count = 0;

    while (start < end) {
        if (nums[start] != 0) {
            start++;
        }
        else if (nums[end] == 0) {
            end--;
        }
        else {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
            count++;
        }
    }
    return count;
}
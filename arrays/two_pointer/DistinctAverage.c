#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int distinctAverages(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    int left = 0;
    int right = numsSize - 1;

    // At most numsSize/2 pairs, so allocate that much
    int *sums = (int *)malloc((numsSize / 2) * sizeof(int));
    int count = 0;

    while (left < right) {
        int currentSum = nums[left] + nums[right]; // represents avg = sum / 2.0

        // check if this sum already exists
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (sums[i] == currentSum) {
                found = 1;
                break;
            }
        }

        if (!found) {
            sums[count++] = currentSum;
        }

        left++;
        right--;
    }

    free(sums);
    return count;
}

int main() {
    int nums[] = {4, 1, 4, 0, 3, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Distinct averages: %d\n", distinctAverages(nums, size));

    return 0;
}
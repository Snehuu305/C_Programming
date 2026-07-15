#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

double minimumAverage(int *nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    int left = 0;
    int right = numsSize - 1;
    double minAvg = __DBL_MAX__;

    while (left < right) {
        double currentAvg = (nums[left] + nums[right]) / 2.0;
        if (currentAvg < minAvg) {
            minAvg = currentAvg;
        }
        left++;
        right--;
    }

    return minAvg;
}
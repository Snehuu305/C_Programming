int* shortestToChar(char* s, char c, int* returnSize)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n = n + 1;
    }

    int* nums = (int*)malloc(n * sizeof(int));

    // Left-to-right pass: distance from nearest 'c' seen so far (on the left)
    int lastSeen = -100000; // large negative = "not seen yet"
    for (int idx = 0; idx < n; idx = idx + 1)
    {
        if (s[idx] == c)
        {
            lastSeen = idx;
        }
        nums[idx] = idx - lastSeen;
    }

    // Right-to-left pass: distance from nearest 'c' seen so far (on the right)
    // take min with what we already have
    lastSeen = 100000; // large positive = "not seen yet"
    for (int idx = n - 1; idx >= 0; idx = idx - 1)
    {
        if (s[idx] == c)
        {
            lastSeen = idx;
        }
        int rightDist = lastSeen - idx;
        if (rightDist < nums[idx])
        {
            nums[idx] = rightDist;
        }
    }

    *returnSize = n;
    return nums;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* diStringMatch(char* s, int* returnSize) {
    int n = strlen(s);
    int* result = (int*)malloc((n + 1) * sizeof(int));
    int low = 0;
    int high = n;
    int index = 0;

    for (int i = 0; i < n; i = i + 1) {
        char ch = s[i];
        if (ch == 'I') {
            result[index] = low;
            low = low + 1;
        } else {
            result[index] = high;
            high = high - 1;
        }
        index = index + 1;
    }

    result[index] = low; // is point par low aur high barabar hote hain

    *returnSize = n + 1;
    return result;
}
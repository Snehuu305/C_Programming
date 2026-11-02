#include <string.h>
#include <stdlib.h>

char* reversePrefix(char* s, int k) {
    int len = strlen(s);
    int start = 0;
    int end = (k < len ? k : len) - 1;

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    return s;
}
#include <string.h>

int firstMatchingIndex(char *s) {
    
    int i = 0;
    int k = strlen(s) - i - 1;

    while (i <= k)
    {
        k = strlen(s) - i - 1;
        if (s[i] == s[k])
        {
            return i;
        }
        i++;
    }

    return -1;
}
void reverseLetter(char *s, int start, int end) {
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
}

char* reverseByType(char* s) {
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end)
    {
        if (!isalpha(s[start])) { start++; }
        else if (!isalpha(s[end])) { end--; }
        else
        {
            reverseLetter(s, start, end);
            start++;
            end--;
        }
    }

    start = 0;
    end = strlen(s) - 1;
    while (start < end)
    {
        if (isalpha(s[start])) { start++; }
        else if (isalpha(s[end])) { end--; }
        else
        {
            reverseLetter(s, start, end);
            start++;
            end--;
        }
    }

    return s;
}
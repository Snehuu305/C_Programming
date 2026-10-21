#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkVowel(char cValue)
{
    if((cValue == 'A') ||(cValue == 'E') || (cValue == 'I') ||
    (cValue == 'O') ||(cValue == 'U') ||(cValue == 'a') ||
    (cValue == 'e') ||(cValue == 'i') ||(cValue == 'o') ||(cValue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0'; 
     
    printf("Enter the character : ");
    scanf("%c", &cValue);

    BOOL bRet = FALSE;
    bRet = checkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c is vowel\n", cValue);
    }
    else
    {
        printf("%c is not vowel\n", cValue);
    }

    return 0;
}
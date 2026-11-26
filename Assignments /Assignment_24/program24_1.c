#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch) 
            return TRUE;
        str++;
    }
    return FALSE;
}

int main()
{
      char arr[20];
      char cValue;
      BOOL bRet = FALSE;

      printf("Enter a string : ");
      scanf("%19s[^\n]", arr);

      printf("Enter a character : ");
      scanf(" %c", &cValue);

      bRet = chkChar(arr, cValue);

      if(bRet == TRUE)
      {
         printf("The character is present ");
      }

      else
      {
        printf("Character is not present ");
      } 

    return EXIT_SUCCESS;
}
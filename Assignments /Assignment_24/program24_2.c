#include<stdio.h>
#include<stdlib.h>


int chkChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch) 
        {
              iCount++;
        }
            str++;
    }
    return iCount;
}

int main()
{
      char arr[20];
      char cValue;
      int bRet = 0;

      printf("Enter a string : ");
      scanf("%19s[^\n]", arr);

      printf("Enter a character : ");
      scanf(" %c", &cValue);

      bRet = chkChar(arr, cValue);

         printf("Frequency of the character is %d ", bRet);        

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>


int chkChar(char *str, char ch)
{
    int iCnt = 0, iCount = 0;
    int iPos = -1;

    while() 
    {
        if(*str == ch)
        {
              iPos = iCnt;
              break;
        }
            iCnt++;
            str++;
    }
    return iPos;
}

int main()
{
      char arr[20];
      char cValue;
      int bRet = 0;

      printf("Enter a string : ");
      scanf("%[^\n]s", arr);

      printf("Enter a character : ");
      scanf(" %c", &cValue);

      bRet = chkChar(arr, cValue);

         printf("Frequency of the character is %d ", bRet);        

    return EXIT_SUCCESS;
}

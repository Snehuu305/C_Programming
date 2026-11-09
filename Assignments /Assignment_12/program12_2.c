#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkZero(int iNo)
{
   bool cZero = false;
  int iCnt = 0, iDigit = 0;

  while(iNo != 0)
  {
     iDigit = iNo % 10;
     if(iDigit == 0)
     {
        cZero = true;
        break;
     }
        iNo = iNo / 10;
  }

    return cZero;
}

int main()
{
     int iValue = 0;
     bool bRet = 0;

     printf("Enter number : ");
     scanf("%d", &iValue);

     bRet = checkZero(iValue);

     if(bRet == true)
     {
            printf("Given number contain zero");
     }

     else
        {
                printf("Given number does not contain zero");
        }

    return EXIT_SUCCESS;
}
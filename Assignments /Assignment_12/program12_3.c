#include<stdio.h>
#include<stdlib.h>

int countTwo(int iNo)
{
  int iCnt = 0, iDigit = 0;
  int iCount = 0;

  while(iNo != 0)
  {
     iDigit = iNo % 10;
     if(iDigit == 2)
     {
        iCount++;
     }
        iNo = iNo / 10;
  }

    return iCount;
}

int main()
{
     int iValue = 0, iRet = 0;

     printf("Enter number : ");
     scanf("%d", &iValue);

     iRet = countTwo(iValue);

    printf("frequency of 2 in given number is : %d", iRet);
    
    return EXIT_SUCCESS;
}
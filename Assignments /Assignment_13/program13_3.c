#include<stdio.h>
#include<stdlib.h>

int countRange(int iNo)
{
  int iDigit = 0;
  int iCount = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
     iDigit = iNo % 10;
     if((iDigit > 3)  && (iDigit < 7))
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

     iRet = countRange(iValue);

    printf("frequency of digits in the range 4-6 in given number is : %d", iRet);
    
    return EXIT_SUCCESS;
}
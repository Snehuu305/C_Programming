#include<stdio.h>
#include<stdlib.h>

int countEven(int iNo)
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
     if((iDigit % 2) == 0)
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

     iRet = countEven(iValue);

    printf("frequency of even digits in given number is : %d", iRet);
    
    return EXIT_SUCCESS;
}
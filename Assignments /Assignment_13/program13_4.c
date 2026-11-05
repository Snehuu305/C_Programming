#include<stdio.h>
#include<stdlib.h>

int countRange(int iNo)
{
  int iDigit = 0;
  int iMult = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
     iDigit = iNo % 10;
      iMult = iMult * iDigit;
        iNo = iNo / 10;
  }

    return iMult;
}

int main()
{
     int iValue = 0, iRet = 0;

     printf("Enter number : ");
     scanf("%d", &iValue);

     iRet = countRange(iValue);

    printf("Multiplication of digits in given number is : %d", iRet);
    
    return EXIT_SUCCESS;
}
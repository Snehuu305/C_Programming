#include<stdio.h>
#include<stdlib.h>

int sumNonFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
      int iValue = 0, iRet = 0;

      printf("Enter the number : ");
      scanf("%d", iValue);

      iRet = sumNonFact(iValue);

      printf("Sum of non factors of %d is : %d", iValue, iRet);

      return EXIT_SUCCESS;
}
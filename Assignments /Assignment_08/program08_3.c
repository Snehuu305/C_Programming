#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
   
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iFact = iCnt*iFact;
    }

    return iFact;
}

int main()
{
      int iNo = 0, iRet = 0;

      printf("Enter the number : ");
      scanf("%d", &iNo);

      iRet = table(iNo);
      
      printf(" %d ", iRet);
      
    return EXIT_SUCCESS;
}
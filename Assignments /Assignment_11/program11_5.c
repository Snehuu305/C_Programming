#include<stdio.h>
#include<stdlib.h>

int reverseOfRange(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    
    if(iNo1 < iNo2)
     {
            for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
             {
                if((iCnt % 2) == 1)
                {
                    iSum = iSum + iCnt;
                }
           }
        return iSum;
    }
    
        else printf("Invalid Number");
}

int main()
{
      int iValue1 = 0;
      int iValue2 = 0;
      int iRet = 0;

      printf("Enter first number : ");
      scanf("%d", &iValue1);

      printf("Enter second number :");
      scanf("%d", &iValue2);

          iRet = AdditionOfRange(iValue1, iValue2);

     printf("Addtion of numbers is : %d", iRet);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

void sumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    printf("Sum of non factors of %d is : %d", iNo, iSum);}

int main()
{
      int iValue = 0;

      printf("Enter the number : ");
      scanf("%d", iValue);

      sumNonFact(iValue);

      return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

void table(int iNo)
{
   
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iFact = iCnt*iNo;
        printf(" %d ", iFact);
    }
}

int main()
{
      int iNo = 0;

      printf("Enter the number : ");
      scanf("%d", &iNo);

      table(iNo);

      
    return EXIT_SUCCESS;
}
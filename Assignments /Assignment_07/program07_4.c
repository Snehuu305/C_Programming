#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
   
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         if((iCnt % 2) == 1)
         {
            printf(" %d ", iCnt);
         }

    }
}

int main()
{
      int iNo = 0;

      printf("Enter the number : ");
      scanf("%d", &iNo);

      pattern(iNo);
      
    return 0;
}
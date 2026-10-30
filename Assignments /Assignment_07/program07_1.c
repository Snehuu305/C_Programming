#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
   
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
         if((iCnt % 2) == 0)
         {
            printf(" * ");
         }

         else
         {
            printf(" $ ");
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
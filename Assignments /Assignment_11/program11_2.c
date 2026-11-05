#include<stdio.h>
#include<stdlib.h>

void displayEevenRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 < iNo2)
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }

    else printf("Invalid range");
}

int main()
{
      int iValue1 = 0;
      int iValue2 = 0;

      printf("Enter first number : ");
      scanf("%d", &iValue1);

      printf("Enter second number :");
      scanf("%d", &iValue2);

    displayEevenRange(iValue1, iValue2);

    return EXIT_SUCCESS;
}
#include<stdio.h>

void Display(int iNo1, int iFrequency)
{
      int iCnt = 0;

      for(iCnt = 1; iCnt <= iFrequency; iCnt++)
      {
         printf("%d\t", iNo1);
      }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf(" Enter the numbers : ");
    scanf("%d\n", &iValue1);

        printf(" Enter the Frequency : ");
        scanf("%d\n", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
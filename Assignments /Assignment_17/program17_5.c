#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
     int iCnt1 = 0, iCnt2 = 0, iNum = 0, iNum2 = 0;

      iNum = 1;

     for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
     {
         iNum2 = iNum;
         for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
           printf("%d\t", iNum2);
           iNum2++;        
        } 
        iNum++;
        printf("\n");     
     }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

void DisplayNums(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNum = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {  
         iNum++;
        for(iCnt2 = 1; iCnt2 < iCol; iCnt2++)
        {
            printf("%d\t", iNum);
            iNum++;
        }
         printf("%d\t", iNum);
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter row number : ");
    scanf("%d", &iValue1);

    printf("Enter column number : ");
    scanf("%d", &iValue2);

    DisplayNums(iValue1, iValue2);

    return EXIT_SUCCESS;
}
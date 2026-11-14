#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
     int iCnt1 = 0, iCnt2 = 0;

     for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
     {
         for(iCnt2 = 1; iCnt2 <= iCnt11; iCnt2++)
        {
                printf("*\t");
            
        } 
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
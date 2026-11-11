#include <stdio.h>
#include <stdlib.h>

int FactDifference(int iNo)
{
    int iCnt = 0, iFact = 0, nFact = 0;

    if(iNo <= 0)
    {
        return 0;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            nFact = nFact + iCnt;
        }
    }
    return (iFact - nFact);
}

int main(void)
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FactDifference(iValue);

    printf("Difference between factors and non factors of %d is : %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}
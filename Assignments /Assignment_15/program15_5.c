#include<stdio.h>
#include<stdlib.h>

float percentage(int iNo1, int iNo2)
{
    float fRet = 0.0;

    fRet = ((float)iNo1 / (float)iNo2) * 100;

    return fRet;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter out of marks : ");
    scanf("%d", &iValue1);

    printf("Enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = percentage(iValue2, iValue1);

    printf("Percentage is : %.2f", fRet);

    return EXIT_SUCCESS;
}
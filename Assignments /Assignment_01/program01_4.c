#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if(iNo % 5 ==0)
    {
       return TRUE;
    }

    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Entered number is divisible by 5\n");
    }

    else
    {
        printf("Entered number is not divisible by 5\n");
    }

    return 0;
}
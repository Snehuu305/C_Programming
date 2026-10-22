#include<stdio.h>

void CheckDivisible(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Given number is divisible by 5\n");
    }
    
    else 
    {
        printf("Given number is not divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);
    
    return 0;
}
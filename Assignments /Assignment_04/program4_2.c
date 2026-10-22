#include<stdio.h>

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Given number is even\n");
    }
    
    else 
    {
        printf("Given number is odd\n");
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
#include<stdio.h>

void Display(int iValue)
{
     if(iValue < 0)
     {
        printf("Given number is negative\n");
     }

     else if(iValue > 0)
    {
        printf("Given number is positive\n");
    }
    else
    {
        printf("Given number is zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
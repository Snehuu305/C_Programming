#include<stdio.h>

void checkLeap(int iYear)
{
    if((iYear % 4) == 0)
    {
        printf("This is Leap year");
    }   
    
    else 
    {
        printf("This is not a Leap year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter Year : ");
    scanf("%d", &iYear);

    checkLeap(iYear);
    
    return 0;
}
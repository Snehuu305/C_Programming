#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iNo1 = iNo;

    if(iNo1 > 0)
    {
        iNo1 = -iNo1;
    }

    for(iCnt = iNo1; iCnt <= iNo; iCnt++)
    {
          printf(" %d ", iCnt);
    } 
}

int main()
{
     int iValue = 0;

     printf("Enter the number : ");
     scanf("%d", &iValue);

     Display(iValue);

    return EXIT_SUCCESS;
}
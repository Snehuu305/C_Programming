#include<stdio.h>

void greaterNum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is greater", iNo1);
    }

    else if(iNo1 < iNo2)
    {
        printf("%d is greater\n", iNo2);
    }

    else 
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
     int iValue1 = 0, iValue2 = 0;

     printf("Enter the 1st number : ");
     scanf("%d", &iValue1);

     printf("Enter the 2nd Number : ");
     scanf("%d", &iValue2);

     greaterNum(iValue1, iValue2);
    return 0;
}
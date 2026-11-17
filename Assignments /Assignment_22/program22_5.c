#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
     int iCnt1 = 0;
     int iNum = 0;
     iNum = 2;
     
     for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
     {
          printf("%d\t", iNum);
          iNum += 2;
     }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue1);

    // printf("Enter number of columns : ");
    // scanf("%d", &iValue2);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

double squareMeter(int iValue)
{
    double dSquareMeter = 0.0;

    if (iValue < 0)
    {
        iValue = -iValue;
    }

    dSquareMeter = iValue * 0.092903;;

    return dSquareMeter;
}

int main()
{
      int iValue = 0;
      double dRet = 0.0;

      printf("Enter the area in square feet : ");
      scanf("%d", &iValue);

      dRet = squareMeter(iValue);

      printf("Area in square meters is : %lf", dRet);

    return EXIT_SUCCESS;
}
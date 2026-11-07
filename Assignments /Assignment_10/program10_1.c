#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    if (fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
      float fValue = 0.0f;
      double dRet = 0.0;

      printf("Enter the number : ");
      scanf("%f", &fValue);

      dRet = CircleArea(fValue);

      pattern("Area of Circle is : %lf", dRet);
      
    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

double RectangleArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if (fWidth < 0)
    {
        fWidth = -fWidth;
    }

    if (fHeight < 0)
    {
        fHeight = -fHeight;
    }

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
      float fWidth = 0.0f;
      float fHeight = 0.0f;
      double dRet = 0.0;

      printf("Enter the width : ");
      scanf("%f", &fWidth);

      printf("Enter the height : ");
      scanf("%f", &fHeight);

      dRet = RectangleArea(fWidth, fHeight);

      pattern("Area of Rectangle is : %lf", dRet);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    if (fTemp< 0)
    {
        fTemp = -fTemp;
    }

    dCelcius = (fTemp - 32) * (5/9);

    return dCelcius;
}

int main()
{
      float fValue = 0.0f;
      double dRet = 0.0;

      printf("Enter the temperature in Fahrenheit : ");
      scanf("%f", &fValue);

      dRet = FhtoCs(fValue);

      printf("Temperature in Celsius is : %lf", dRet);

    return EXIT_SUCCESS;
}
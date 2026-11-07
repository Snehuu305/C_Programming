#include<stdio.h>
#include<stdlib.h>

int calculateMeter(int km)
{
    int meter = 0;

    if (km< 0)
    {
        km = -km;
    }

    meter = 1000*km;

    return meter;
}

int main()
{
      int km = 0;
      int meter = 0;

      printf("Enter the number of kilometers : ");
      scanf("%d", &km);

      meter = calculateMeter(km);

      printf("Distance in meters is : %d", meter);

    return EXIT_SUCCESS;
}
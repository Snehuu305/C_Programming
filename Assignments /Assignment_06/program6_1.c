#include <stdio.h>
#include <stdlib.h>

void checkElectricityBill(int iUnits)
{
    if (iUnits < 0)
    {
        printf("Invalid units");
    }
    else if (iUnits <= 100)
    {
        printf("The electricity bill is : %d", iUnits * 5);
    }
    else if (iUnits <= 200)
    {
        printf("The electricity bill is : %d", iUnits * 7);
    }
    else
    {
        printf("The electricity bill is : %d", iUnits * 10);
    }
    printf("\n");
}

int main()
{
    int iUnits = 0;

    printf("Enter the units : ");
    scanf("%d", &iUnits);

    checkElectricityBill(iUnits);

    return 0;
}
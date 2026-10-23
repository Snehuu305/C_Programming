#include <stdio.h>

void checkDiscount(float amount)
{
    float discountAmount = 0.0f;
    float payableAmount = 0.0f;

    if (amount <= 0)
    {
        printf("Invalid amount\n");
        return;
    }

    if (amount >= 5000)
    {
        discountAmount = amount * 0.20f;
    }
    else if (amount >= 1000)
    {
        discountAmount = amount * 0.10f;
    }

    payableAmount = amount - discountAmount;
    printf("The payable amount is : %.2f\n", payableAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter the amount : ");
    scanf("%f", &fAmount);

    checkDiscount(fAmount);

    return 0;
}
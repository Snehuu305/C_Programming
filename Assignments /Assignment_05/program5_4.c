#include<stdio.h>
#include<stdlib.h>

void checkMultipleDivisiblity(int iNo)
{
   if((iNo % 3) == 0)
   {
      if((iNo % 5) == 0)
      {
         printf("Number is divisible by both");
      }

      else
      {
        printf("Number is only divisible by 3");
      }
   }

   else if((iNo % 5) == 0)
   {
      printf("Number is only divisible by 5");
   }

   else
   {
        printf("Number is not divisible by both");
   }
         printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    checkMultipleDivisiblity(iNo);

    return 0;
}
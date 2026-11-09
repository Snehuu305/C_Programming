#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void revesrveOfNum(int iNo)
{
  int iRev = 0, iDigit = 0;

  while(iNo != 0)
  {
     iDigit = iNo % 10;
     printf("%d\n", iDigit);
        iNo = iNo / 10;
  }

}

int main()
{
    int iValue = 0;

     printf("Enter number : ");
     scanf("%d", &iValue);

     revesrveOfNum(iValue);

    return EXIT_SUCCESS;
}
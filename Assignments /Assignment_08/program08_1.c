#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
   
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    if(iNo < 50)
    {
        printf("Small\n");
    }

    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium\n");
    }

    else
    {
       printf("Large\n");
    }
}

int main()
{
      int iNo = 0;

      printf("Enter the number : ");
      scanf("%d", &iNo);

      Display(iNo);
      
    return 0;
}
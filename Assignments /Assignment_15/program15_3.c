#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool revesrveOfNum(int iNo1, int iNo2)
{
   bool bRet = false;

   if(iNo1 == iNo2)
   {
      bRet = true;
   }

    else
    {
       bRet = false;
    }
 
    return bRet;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

     printf("Enter number : ");
     scanf("%d", &iValue1);

     printf("Enter number : ");
     scanf("%d", &iValue2);

    bRet = revesrveOfNum(iValue1, iValue2);

    if(bRet == true)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }

    return EXIT_SUCCESS;
}
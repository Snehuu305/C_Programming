#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool revesrveOfNum(int iNo)
{
   bool bRet = false;

   if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

     printf("Enter number : ");
     scanf("%d", &iValue);

    bRet = revesrveOfNum(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}
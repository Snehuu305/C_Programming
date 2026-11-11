#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

long int revesrveOfNum(int iNo1, int iNo2, int iNo3)
{
   long int bRet = 0;

   if(iNo1 == 0 )
   {
     if(iNo2 == 0)
     {
        return iNo3;
     }
     else if(iNo3 == 0)
     {
        return iNo2;
     }
     else bRet = iNo2 * iNo3;
      
   }

   else if(iNo2 == 0 )
   {
    if(iNo3 == 0)
     {
        return iNo1;
     }
     else if(iNo1 == 0)
     {
        return iNo3;
     }
     else bRet = iNo1 * iNo3;
   }

   else if(iNo3 == 0 )
   {
    if(iNo2 == 0)
     {
        return iNo1;
     }
     else if(iNo1 == 0)
     {
        return iNo2;
     }
     else bRet = iNo2 * iNo3;
   }

     else bRet = iNo1 * iNo2 * iNo3;

    return bRet;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    long int bRet = 0;

     printf("Enter number : ");
     scanf("%d", &iValue1);

     printf("Enter number : ");
     scanf("%d", &iValue2);

     printf("Enter number : ");
     scanf("%d", &iValue3);

    bRet = revesrveOfNum(iValue1, iValue2, iValue3);

    printf("Multiplication of %d, %d and %d is : %ld", iValue1, iValue2, iValue3, bRet);

    return EXIT_SUCCESS;
}
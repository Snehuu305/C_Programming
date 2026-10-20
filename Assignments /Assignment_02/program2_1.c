#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  
   while(iCnt < iNo)
     {
        print(" * ");
       iCnt++;
     }
}

int main()
{
   int iValue = 0;

  printf("Enter number : ");
   scanf("%d\n", &iValue);

  Display(iValue);

  return 0;
}

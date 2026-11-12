#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
     int iCnt1 = 0, iCnt2 = 0;
     char ch = '\0';

     for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
     {
       ch = 'a';
         for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            

            if ((iCnt1 % 2) == 0 )
            {
                 printf("%d\t", iCnt2);
            }

            else
            {  
               printf("%c\t", ch);
            }
            ch++;            
        } 
        printf("\n");     
      }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
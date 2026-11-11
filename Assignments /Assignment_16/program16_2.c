#include<stdio.h>
#include<stdlib.h>

void DisplayLetters(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char ch = '\0', ch1 = '\0';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        ch = 'A';
        ch1 = 'a';

        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {

            if(iCnt1 % 2 == 0)
            {
                 printf("%c\t", ch1);
            }

            else 
            {
                printf("%c\t", ch);
            }

            ch++;
            ch1++;
        }
        printf("\n");
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter row number : ");
    scanf("%d", &iValue1);

    printf("Enter column number : ");
    scanf("%d", &iValue2);

    DisplayLetters(iValue1, iValue2);

    return EXIT_SUCCESS;
}
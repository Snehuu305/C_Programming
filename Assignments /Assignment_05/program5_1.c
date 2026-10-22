#include<stdio.h>

void findGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond)
    {
        if(iFirst > iThird)
        {
            printf("%d is greatest of all three", iFirst);
        }

        else 
        {
            printf("%d is the greatest of all three", iThird);
        }
    }

    else 
    {
        if(iSecond > iThird)
        {
            printf("%d is the greates of all three", iSecond);
        }

        else 
        {
            printf("%d is the greatest of all three", iThird);
        }
    }
}

int main()
{
     int iFirst = 0, iSecond = 0, iThird = 0;

     printf("Enter three numbers : \n");
     scanf("%d %d %d", &iFirst, &iSecond, &iThird);

     findGreatest(iFirst, iSecond, iThird);

    return 0;
}

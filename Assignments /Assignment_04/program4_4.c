#include<stdio.h>

void checkVotingEligibility(int iAge)
{
    if(iAge < 0)
   {
      printf("Invalid age\n");
   }
   if(( iAge < 18) && (iAge > 0))
   { 
      printf("The person is not eligible for voting\n");
   }

   else if(iAge >= 18)
   {
      printf("The person is eligible for voting\n");
   }

}

int main()
{
     int iValue = 0;

     printf("Enter the age : ");
     scanf("%d", &iValue);

     checkVotingEligibility(iValue);

    return 0;
}
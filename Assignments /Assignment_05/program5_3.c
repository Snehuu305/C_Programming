#include<stdio.h>
#include<stdlib.h>

void checkGreade(float fMarks)
{
    if(fMarks < 40)
    {
        printf("Student is Fail");
    }

    else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Student has D grade");
    }

    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Student has C grade");
    }

    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Student has B grade");
    }

    else if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Student has A grade");
    }

    else if((fMarks < 0) && (fMarks > 100))
    {
        printf("Invalid marks...!!!");
    }
}

int main()
{
     float fMarks = 0.0f;
       
     printf("Enter the marks : ");
     scanf("%f", &fMarks);

     checkGreade(fMarks);

    return 0;
}
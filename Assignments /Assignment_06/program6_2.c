#include <stdio.h>
#include <stdlib.h>

void checkAddmission(int age, float marks)
{
    if(age == 18){
    if ((marks >= 60) && (marks <= 100))
    {
          if(age ==  18)
          {
             printf("Student is eligible ");
          }

          else 
          {
            printf("Student is not eligible ");
          }
    }
}
    
    else if(marks < 60 || age > 18 || age < 18)
    {
            printf("Student is not eligible ");
    }

    else 
    {
        printf("Invalid input");
    }

    printf("\n");
}

int main()
{
    int age = 0;
float marks = 0.0f;

    printf("Enter the age and marks : ");
    scanf("%d%f", &age, &marks);

    checkAddmission(age, marks);

    return 0;
}
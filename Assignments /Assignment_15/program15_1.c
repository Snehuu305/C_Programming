#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Enter your name : ");
    scanf("%s", Name);  

    printf("Your name is : %s", Name);

    return EXIT_SUCCESS;
}
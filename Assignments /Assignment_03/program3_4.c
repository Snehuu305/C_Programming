#include<stdio.h>

void Display(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue +32);
    }

    else if(cValue >= 'a' && cValue <= 'z')
    {
          printf("%c", cValue -32);
    } 
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);
      
    return 0;
}
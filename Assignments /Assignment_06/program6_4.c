#include <stdio.h>
#include <stdlib.h>

void checkTriangle(int a, int b, int c)
{
    if (a > 0 && b > 0 && c > 0 &&
        (a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Enter three sides : ");
    scanf("%d%d%d", &a, &b, &c);

    checkTriangle(a, b, c);

    return EXIT_SUCCESS;
}
// check if given number is odd or even

#include <stdio.h>

int main()
{
    int number;

    printf("Please enter the number: ");
    scanf("%d",&number);

    if (number%2 == 0)
    {
        printf("The number %d is even.",number);
    }
    else
    {
        printf("The number %d is odd.",number);
    }

    return 0;
}

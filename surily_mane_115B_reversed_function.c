//get a number and reverse it using functions.

#include <stdio.h>

int reversed()
{
    int rev = 0, num, rem;

    printf("Please enter the number: ");
    scanf("%d",&num);

    while(num)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    printf("The number %d when reversed is %d.",num,rev);

    return 0;
}

int main()
{
    reversed();
}

#include <stdio.h>

int main()
{
    int number, product, i;

    printf("Please enter the number: ");
    scanf("%d",&number);

    printf("The table of %d is:",number);

    for(i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d",number, i, number*i);
    }
}

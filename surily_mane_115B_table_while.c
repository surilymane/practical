//print the table of a number
#include <stdio.h>

int main()
{
    int i = 1, number, product;

    printf("Please enter the number: ");
    scanf("%d",&number);

    printf("The table of %d is:",number);

    while(i <= 10)
    {
        printf("\n%d * %d = %d",number, i, number*i);
        i++;
    }
}

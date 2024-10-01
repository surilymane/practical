#include<stdio.h>

void main()
{
        int number_1, number_2, remainder, quotient;

        printf("Please enter the first number: ");
        scanf("%d",&number_1);
        printf("\nPlease enter the second number: ");
        scanf("%d",&number_2);

        remainder = number_1%number_2;
        quotient = number_1 / number_2;

        printf("\nThe quotient of %d and %d is %d and the remainder is %d.", number_1, number_2, quotient, remainder);
}

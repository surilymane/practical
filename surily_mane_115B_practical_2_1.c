#include<stdio.h>

void main()
{
        float num_1, num_2, sum, difference, product, quotient;

        printf("\nPlease enter the first number: ");
        scanf("%f",&num_1);
        printf("\nPlease enter the second number: ");
        scanf("%f",&num_2);

        sum = num_1 + num_2;
        difference = num_1 - num_2;
        product = num_1 * num_2;
        quotient = num_1/num_2;

        printf("\nThe sum of %f and %f is %f, the difference is %f, the product is %f and the quotient is %f." ,num_1, num_2, sum, difference, product, quotient);
}

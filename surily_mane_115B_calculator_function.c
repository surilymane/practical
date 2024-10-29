//get an operator and carry out the operation using functions.

#include <stdio.h>

int add()
{
    float num1, num2;

    printf("Please enter the numbers: ");
    scanf("%f %f",&num1,&num2);

    printf("The sum of %f and %f is %f.", num1, num2, num1 + num2);

    return 0;
}

int subtract()
{
    float num1, num2;

    printf("Please enter the numbers: ");
    scanf("%f %f",&num1,&num2);

    printf("The difference between of %f and %f is %f.", num1, num2, num1 - num2);

    return 0;
}

int multiply()
{
    float num1, num2;

    printf("Please enter the numbers: ");
    scanf("%f %f",&num1,&num2);

    printf("The product of %f and %f is %f.", num1, num2, num1 * num2);

    return 0;
}

int division()
{
    float num1, num2;

    printf("Please enter the numbers: ");
    scanf("%f %f",&num1,&num2);

    printf("The quotient of %f and %f is %f.", num1, num2, num1 / num2);

    return 0;
}

int modulus()
{
    int num1, num2;

    printf("Please enter the numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("The remainder of %d and %d is %d.", num1, num2, num1 % num2);

    return 0;
}

int main()
{
    char operators;

    printf("Please enter the operation: ");
    scanf("%c",&operators);

    switch(operators)
    {
        case '+':
        {
            add();
            break;
        }

        case '-':
        {
             subtract();
             break;
        }

        case '*':
        {
            multiply();
            break;
        }

        case '/':
        {
            division();
            break;
        }

        case '%':
        {
            modulus();
            break;
        }

        default:
        {
            printf("Invalid input.");
        }
    }
}

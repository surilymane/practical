//Program to take operator input and carry out the operations using pointers.

#include <stdio.h>

int main()
{
    char op, *p3 = &op;

    printf("Enter the operator: ");
    scanf("%c",&op);

    switch(op)
    {
        case '+':
        {
            float num1, num2, *p1 = &num1, *p2 = &num2;

            printf("Enter the two numbers: ");
            scanf("%f %f",&num1,&num2);

            print("The sum of %f and %f is: %f.",*p1,*p2,*p1 + *p2);

            break;
        }

        case '-':
        {
            float num1, num2, *p1 = &num1, *p2 = &num2;

            printf("Enter the two numbers: ");
            scanf("%f %f",&num1,&num2);

            print("The sum of %f and %f is: %f.",*p1,*p2,*p1 - *p2);

            break;
        }

        case '*':
        {
            float num1, num2, *p1 = &num1, *p2 = &num2;

            printf("Enter the two numbers: ");
            scanf("%f %f",&num1,&num2);

            print("The sum of %f and %f is: %f.",*p1,*p2,*p1 * *p2);

            break;
        }

        case '/':
        {
            float num1, num2, *p1 = &num1, *p2 = &num2;

            printf("Enter the two numbers: ");
            scanf("%f %f",&num1,&num2);

            print("The sum of %f and %f is: %f.",*p1,*p2,*p1 / *p2);

            break;
        }

        case '%':
        {
            int num1, num2, *p1 = &num1, *p2 = &num2;

            printf("Enter the two numbers: ");
            scanf("%d %d",&num1,&num2);

            print("The sum of %d and %d is: %d.",*p1,*p2,*p1 % *p2);

            break;
        }

        default:
        {
            printf("Invalid input");

            break;
        }
    }
}

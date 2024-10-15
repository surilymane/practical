//get an operator and two numbers from user, carry out that operation and display results.

#include <stdio.h>

int main()
{
      char operators;
      int num_1, num_2, result;

      printf("Please enter the operator: ");
      scanf("%c",&operators);

      printf("Please enter the two numbers: ");
      scanf("%d %d",&num_1,&num_2);

      switch(operators)
      {
            case '+':
                  result = num_1 + num_2;
                  printf("\nThe addition of %d and %d is %d.",num_1,num_2,result);
                  break;

            case '-':
                  result = num_1 - num_2;
                  printf("\nThe subtraction of %d and %d is %d.",num_1,num_2,result);
                  break;

            case '*':
                  result = num_1 * num_2;
                  printf("\nThe multiplication of %d and %d is %d.",num_1,num_2,result);
                  break;

            case '/':
                  result = num_1 / num_2;
                  printf("\nThe division of %d and %d is %d.",num_1,num_2,result);
                  break;

            case '%':
                  result = num_1%num_2;
                  printf("\nThe remainder of %d divided by %d is %d.",num_1,num_2,result);
                  break;

            default:
                  printf("\nInvalid input.");
                  break;
      }
}

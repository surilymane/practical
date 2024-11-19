//Program to check if first number is divisible by second number.

#include <stdio.h>

int main()
{
      int dividend, divisor;

      printf("Please enter the dividend and the divisor: ");
      scanf("%d %d",&dividend,&divisor);

      if(dividend%divisor == 0)
      {
            printf("\nThe number %d is divisible by the number %d.",dividend,divisor);
      }
      else
      {
            printf("\nThe number %d is not divisible by the number %d.",dividend,divisor);
      }
}

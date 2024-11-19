//Program to calculate the product of digits in a number.

#include <stdio.h>

int main()
{
      int number, remainder, product = 1;

      printf("Please enter the number: ");
      scanf("%d",&number);

      printf("The product of the digits of the number %d is ",number);

      while(number)
      {
            remainder = number%10;
            number = number/10;
            product *= remainder;
      }

      printf("%d.",product);

}

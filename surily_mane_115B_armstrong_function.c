#include <stdio.h>

int armstrong(int num)
{
      int remainder, og_number, cube_sum = 0;

      og_number = num;

      while(num != 0)
      {
            remainder = num % 10;
            num = num / 10;
            cube_sum += remainder*remainder*remainder;
      }

      if(cube_sum == og_number)
      {
            printf("The number %d is an armstrong number.",og_number);
      }
      else
      {
            printf("The number %d is not an armstrong number.",og_number);
      }
}

int main()
{
      int number;

      printf("Please enter the number: ");
      scanf("%d",&number);

      armstrong(number);
}

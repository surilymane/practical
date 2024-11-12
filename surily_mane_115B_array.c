//Take an array as an input and print the same array as the output.

#include <stdio.h>

int main()
{
      int i, a[10];

      for(i = 0; i < 10; i++)
      {
            printf("Please enter the number: ");
            scanf("%d",&a[i]);
      }

      printf("The array is: ");

      for(i = 0; i < 10; i++)
      {
            printf("\n%d",a[i]);
      }
}

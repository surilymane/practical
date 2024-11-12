//Take an array as a n input and print the array in reverse.

#include <stdio.h>

int main()
{
      int i, a[10];

      for(i = 0; i < 10; i++)
      {
            printf("Please enter the number: ");
            scanf("%d",&a[i]);
      }

      printf("The reversed array is: ");

      for(i = 9; i >= 0; i--)
      {
            printf("\n%d",a[i]);
      }
}

//Program to identify how many components of the array are alphabets, numbers and symbols.

#include <stdio.h>

int main()
{
      int i, count_alpha = 0, count_num = 0, count_symbols = 0;
      char a[10];

      for(i = 0; i < 10; i++)
      {
            printf("\nPlease enter the character: ");
            scanf(" %c",&a[i]);
      }

      for(i = 0; i < 10; i++)
      {
            if(a[i] < 128)
            {
                  if(((65 <= a[i]) && (a[i] <= 90)) || ((97 <= a[i]) && (a[i] <= 122)))
                  {
                        count_alpha++ ;
                  }
                  else if ((48 <= a[i]) && (a[i] <= 57))
                  {
                        count_num++;
                  }
                  else
                  {
                        count_symbols++;
                  }
            }
      }

      printf("\nThere are %d alphabets, %d numbers and %d symbols in the array.",count_alpha, count_num, count_symbols);
}

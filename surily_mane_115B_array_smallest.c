#include <stdio.h>

int main()
{
      int i, j, a[10];

      for(i = 0; i < 10; i++)
      {
            printf("Please enter the number: ");
            scanf("%d",&a[i]);
      }

      for (i = 0; i < 10; i++)
      {
            int count = 0;

            for(j = 0; j < 10; j++)
            {
                  if(a[i] < a[j])
                  {
                        count++;
                  }
            }

            if(count == 9)
            {
                  printf("The number %d is the smallest",a[i]);
            }
      }
}

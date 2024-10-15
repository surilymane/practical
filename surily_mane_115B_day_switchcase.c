//get a number from 1-7 and display the corresponding day.

#include <stdio.h>

int main()
{
      int choice;

      printf("Please enter a number form 1-7: ");
      scanf("%d",&choice);

      switch(choice)
      {
            case 1:
                  printf("The day is Sunday.");
                  break;

            case 2:
                  printf("The day is Monday");
                  break;

            case 3:
                  printf("The day is Tuesday.");
                  break;

            case 4:
                  printf("The day is Wednesday.");
                  break;

            case 5:
                  printf("The day is Thursday.");
                  break;

            case 6:
                  printf("The day is Friday.");
                  break;

            case 7:
                  printf("The day is Saturday.");
                  break;

            default:
                  printf("Invalid input.");
                  break;
      }
}

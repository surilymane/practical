//Program to get 3 marks from user, calculate percent and display grade.
// e : 90< p v: 75 < p < 90 g: 60< P <75 a: 40<p<60 f<40

#include <stdio.h>

int main()
{
      int marks[3], total = 0, i;

      for(i = 0; i < 3; i++)
      {
            printf("Enter the marks of subject %d: ",i+1);
            scanf("%d",&marks[i]);
            total += marks[i];
      }


      if(total/3 >= 90)
      {
            printf("The percent is %f and the grade is E.",total/3.00);
      }
      else if (total/3 >= 75)
      {
            printf("The percentage is %f and the grade is V.",total/3.00);
      }
      else if(total/3 >= 60)
      {
            printf("The percentage is %f and the grade is G.",total/3.00);
      }
      else if(total/3 >= 40)
      {
            printf("The percentage is %f and the grade is A.",total/3.00);
      }
      else
      {
            printf("The percentage is %f and the grade is F.",total/3.00);
      }
}

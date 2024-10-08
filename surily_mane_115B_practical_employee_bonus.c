// calculate employee bonus based on joining and current year.

#include <stdio.h>

int main()
{
    int joining_year, current_year;

    printf("Please enter the employee's joining year: ");
    scanf("%d",&joining_year);
    printf("and the current year: ");
    scanf("%d",&current_year);

    if(current_year - joining_year >= 3)
    {
        printf("The employee's bonus is 2,500/-.");
    }
    else
    {
        printf("The employee's bonus is 0/-.");
    }

    return 0;
}

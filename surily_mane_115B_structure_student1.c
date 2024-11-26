//Program to create a structure for student's information and calculate average.

#include <stdio.h>

struct student
{
    int r_no;
    float marks[3];
    float total;
}s1;

int main()
{
    printf("Please enter the roll no: ");
    scanf("%d",&s1.r_no);

    s1.total = 0;

    for(int i = 0; i < 3; i++)
    {
        printf("Please enter mark %d: ",i+1);
        scanf("%f",&s1.marks[i]);
        s1.total += s1.marks[i];
    }

    printf("The average is %f.",s1.total/3.0);
}

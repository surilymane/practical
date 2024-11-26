//Program to get marks of 3 students using structure and display in tabular form.

#include <stdio.h>

struct student
{
    int r_no, marks[3], total;
}s[3];

int main()
{
    for(int i = 0; i < 3; i++)
    {
        printf("Please enter the roll no of student %d: ",i+1);
        scanf("%d",&s[i].r_no);

        s[i].total = 0;

        for(int j = 0; j < 3; j++)
        {
            printf("Please enter mark %d of student %d: ",j+1, i+1);
            scanf("%d",&s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    printf("Roll No.\tMark 1\t\tMark 2\t\tMark 3\tTotal Marks\t\tAverage");

    for(int i = 0; i < 3; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f",s[i].r_no,s[i].marks[0],s[i].marks[1],s[i].marks[2],s[i].total,s[i].total/3.0);
    }
}

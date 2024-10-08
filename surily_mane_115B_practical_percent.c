//calculate percentage of five subjects.

#include<stdio.h>

int main()
{
    float mark1, mark2, mark3, mark4, mark5, out_of1, out_of2, out_of3, out_of4, out_of5, total_out_of, total_marks, percent;

    printf("Please enter the marks of the first subject and the total marks: ");
    scanf("%f %f",&mark1,&out_of1);

    printf("Please enter the marks of the second subject and the total marks: ");
    scanf("%f %f",&mark2,&out_of2);

    printf("Please enter the marks of the third subject and the total marks: ");
    scanf("%f %f",&mark3,&out_of3);

    printf("Please enter the marks of the fourth subject and the total marks: ");
    scanf("%f %f",&mark4,&out_of4);

    printf("Please enter the marks of the fifth subject and the total marks: ");
    scanf("%f %f",&mark5,&out_of5);

    total_marks = mark1 + mark2 + mark3 + mark4 + mark5;
    total_out_of = out_of1 + out_of2 + out_of3 + out_of4 + out_of5;

    percent = total_marks/total_out_of * 100.0;

    printf("The total marks are %f and the percentage is %f.",total_marks, percent);

    return 0;
}

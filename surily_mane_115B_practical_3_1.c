#include<stdio.h>

int main()
{
    float basic_salary, hra, da, total;

    printf("Please enter the basic salary: ");
    scanf("%f",&basic_salary);

    hra = 0.2 * basic_salary;
    da = 0.4 * basic_salary;
    total = hra + da + basic_salary;

    printf("\nThe HRA is %f, the Daily Allowance is %f and the Total Salary is %f.",hra,da,total);

    return 0;
}

//print a triangle
#include <stdio.h>

int main()
{

    int rows, i, j;

    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

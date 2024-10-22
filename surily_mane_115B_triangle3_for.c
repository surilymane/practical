//print an inverted pyramid
#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i = 0; i < (rows - 1); i++)
    {
        for(j = 1; j < (rows - i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

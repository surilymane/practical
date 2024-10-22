//print an inverted triangle
#include <stdio.h>
    int rows, i, j;


int main()
{
    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < (rows - i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

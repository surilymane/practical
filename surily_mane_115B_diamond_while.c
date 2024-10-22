#include <stdio.h>

int main()
{
    int rows, i = 1, j, k;

    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    int columns = rows;

    while(i <= rows)
    {
        j = 0;
        while(j <= columns/2)
        {
            printf(" ");
            j++;
        }

        k = 0;
        while(k < i)
        {
            printf("* ");
            k++;
        }

        j = 0;
        while(j < columns/2)
        {
            printf(" ");
            j++;
        }
        printf("\n");
        i++;
        columns--;
    }

    /*columns = rows;

    while (i < (rows - 1))
    {
        j = columns;
        while(j < columns)
        {
            printf("");
            j++;
        }

        k = 0;
        while(k < columns)
        {
            printf("*");
            k++;
        }

        while(j < columns)
        {
            printf(" ");
            j++;
        }
        columns++;
    }*/
}

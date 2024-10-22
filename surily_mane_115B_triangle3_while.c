//print an inverted pyramid
#include <stdio.h>

int main()
{
    int rows, i = 0, j;

    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    while(i < rows)
    {
        j = 0;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    i = 0;

    while(i < (rows - 1))
    {
        j = 1;
        while(j < (rows - i))
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

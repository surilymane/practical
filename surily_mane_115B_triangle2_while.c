//print an inverted triangle
#include <stdio.h>
    int rows, i = 0, j;


int main()
{
    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    while(i < rows)
    {
        j = 0;
        while(j < (rows - i))
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

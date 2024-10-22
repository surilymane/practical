//print a triangle
#include <stdio.h>

int main()
{
    int rows, i = 1, j;

    printf("Please enter the number of rows: ");
    scanf("%d",&rows);

    while(i <= rows)
    {
        j = 1;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

//Program to store a cricketer's information in a structure.

#include <stdio.h>

struct cricketer
{
    char name[100];
    int jersey, runs, wickets, centuries, fifty;
}c[5];

int main()
{
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the name of cricketer %d: ",i+1);
        scanf("%s",&c[i].name);
        printf("Enter the jersey number, runs, wickets, number of centuries and fifties: ");
        scanf("%d %d %d %d %d",&c[i].jersey,&c[i].runs,&c[i].wickets,&c[i].centuries,&c[i].fifty);
    }

    printf("NAME\tJERSEY NUMBER\tRUNS\t\tWICKETS\t\tCENTURIES\tFIFTIES");

    for(int i = 0; i < 5; i++)
    {
        printf("\n%s\t%d\t\t%d\t\t%d\t\t%d\t\t%d",c[i].name,c[i].jersey,c[i].runs,c[i].wickets,c[i].centuries,c[i].fifty);
    }
}

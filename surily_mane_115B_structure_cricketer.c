//Program to store a cricketer's information in a structure.

#include <stdio.h>

struct cricketer
{
    char name[100];
    int jersey, runs, wickets, centuries, fifty;
}c1;

int main()
{
    printf("Enter the name of the cricketer: ");
    scanf("%s",&c1.name);
    printf("Enter the jersey number, runs, wickets, number of centuries and fifties: ");
    scanf("%d %d %d %d %d",&c1.jersey,&c1.runs,&c1.wickets,&c1.centuries,&c1.fifty);

    printf("NAME\tJERSEY NUMBER\tRUNS\t\tWICKETS\t\tCENTURIES\tFIFTIES\n%s\t%d\t\t%d\t\t%d\t\t%d\t\t%d",c1.name,c1.jersey,c1.runs,c1.wickets,c1.centuries,c1.fifty);
}

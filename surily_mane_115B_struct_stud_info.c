#include <stdio.h>
#include <string.h>

struct student
{
	int r_no, day, month, year, class, ad_year;
	char name[50], address[100], email[50];
	float percent;
};

int main()
{
	struct student s[10];

	for(int i = 0; i < 3; i++)
	{
		printf("Enter the following details of student %d",i+1);
		printf("\nEnter name, roll no and class: ");
		scanf("%s %d %d",&s[i].name ,&s[i].r_no ,&s[i].class);
		printf("Enter the percentage: ");
		scanf("%f",&s[i].percent);
		printf("Enter the email id: ");
		scanf("%s",&s[i].email);
		printf("Enter date of birth:");
		printf("\nEnter day, month, year: ");
		scanf("%d %d %d",&s[i].day ,&s[i].month ,&s[i].year);
		printf("Enter admission year: ");
		scanf("%d",&s[i].ad_year);
		getchar();
		printf("Enter address: ");
		scanf("%[^\n]",&s[i].address);
		//fflush(stdin);
	}

	printf("Std. No.\tName\tRoll No.\tClass\tPercent\tDOB\tAdmission Year\tAddress\tEmail ID");

	for(int i = 0; i < 10; i++)
	{
		printf("\n%d.\t%s\t%d\t%d\t%f\t%d/%d/%d\t%d\t%s\t%s",i+1,s[i].name,s[i].r_no,s[i].class,s[i].percent,s[i].day,s[i].month,s[i].year,s[i].ad_year,s[i].address,s[i].email);
	}
}

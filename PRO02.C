#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno[2];
	char name[20];
};

void main()
{
	student s[10];
	int i, n;

clrscr();

	printf("Enter The number of students you want to Input : ");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
		printf("Enter rollno, standard, name for student : ");
		scanf("%d %d %s",&s[i].rollno,&s[i].standard,&s[i].name);
	}

getch();
}


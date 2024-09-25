#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno[2];
	char name[20];
	char ch='y'
};

void main()
{
	student s[10];
	int i, n;

clrscr();

	while(ch=='y' || ch=='y')
	{
	printf("Enter The number of students you want to Input : ");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
		printf("Enter rollno, standard, name for student : ");
		scanf("%d %d %s",&s[i].rollno,&s[i].standard,&s[i].name);
	}

	for(i=0; i<n; i++)
	{
		printf("student # %d: Roll no: %d standard: %d Name: %s \n",i,s[i].rollno,s[i].standard,s[i].name);
	}
	printf("\n\n Do you want to Continue ? (Y/N) :");
	scanf("%c",&ch);
	}

getch();
}


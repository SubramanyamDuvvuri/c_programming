#include<stdio.h>
#include<stdlib.h>
#define maxStudents 250;
//void rollNumberDetails(int);
struct student;
void yearOfJoining(int,int,struct student*[]);
typedef struct student
{
	int rollNumber;
	char nameStudent[20];
	char nameDepartment[20];
	char nameCourse[20];
	int yearJoining;
}student ;

int main ()	
{
	
	 int numberOfStudents,i,year;
	 student *p[250];

	 printf("Enter the number of studnets\n");
	 scanf("%d",&numberOfStudents);
	
	 for ( i=0 ;i<numberOfStudents;i++)
	{
		 p[i]=(student*) malloc(sizeof(student));
		 printf("Roll Number  ");
		 scanf ("%d",& p[i]->rollNumber);
		  printf("Name  ");
		 scanf ("%s", p[i]->nameStudent);
		  printf("Department  ");
		 scanf ("%s", p[i]->nameDepartment);
		  printf("Course  ");
		 scanf ("%s", p[i]->nameCourse);
		  printf("year of joining  ");
		 scanf ("%d",& p[i]->yearJoining);
		 				
        }	 
	
	


	printf("Enter the year\n");
	scanf("%d",&year);
	
	yearOfJoining(year,numberOfStudents,p);
	return 0;
}


void yearOfJoining( int year, int number ,student *p[])
{
	int i;
	for ( i=0;i<number;i++)
	{
		if (p[i]->yearJoining==year)
			printf("\n %s\n",p[i]->nameStudent);
	}
}
		




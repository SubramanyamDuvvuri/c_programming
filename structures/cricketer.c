#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100
#define MAXCRIc 20

typedef struct cricketer 
{
	char name[MAXSIZE];
	//int age;
	//int matches;
	float average;
}cricketer;

void qusort (cricketer*[],int );


int main ()
{
	cricketer *p[20];
	int i,num;
	printf("Enter the number of cricketers \n ");
	scanf("%d",&num);
	for( i=0;i<num;i++)
	{
		p[i]=(cricketer*)malloc(sizeof(cricketer));
		printf("Enter name --> ");
		scanf("%s",p[i]->name);
		//printf("Enter the age --> ");
		//scanf("%d",&p[i]->age);
		//printf("Enter the number of matches --> " );
		//scanf ("%d",&p[i]->matches);
		printf("Enter the average -->");
		scanf("%f",&p[i]->average);
	
	}
	qusort(p,num);

	return 0;
}


void qusort(cricketer *p[], int num)
{
	int i,j ;
	cricketer* temp=(cricketer*)malloc(sizeof(cricketer));

	for(i=0 ; i<num ;i++)
	{
		for(j=0;j<num;j++)
		{
			if (p[j]->average>p[i]->average) 	
			{
				
				memcpy(&temp,&p[j],sizeof(p[j]));	
//				printf("--%f----",temp->average);				
				memcpy(&p[j],&p[i],sizeof(p[i]));
				memcpy(&p[i],&temp,sizeof(temp));	
			}
			
				



		}
	}

	for ( i=0 ;i<num;i++)
	{
		printf("\n Names are %s--> %f", p[i]->name , p[i]->average);
	}
}

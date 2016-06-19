#include<stdio.h>
#include<stdlib.h>
#define MAX 100


struct employee
{	
	char name[MAX];
	int employeeID;
};

int main ()
{	
	int num = 5;
 	int i;	
	struct employee *e[250];
	
	for (i=0;i<5;i++)
	{

		e[i]=(struct employee*)malloc (sizeof(struct employee));
		printf("\nEmployee name ");
		scanf("%s", e[i]->name);
		printf("\nEmployee id ");
		scanf("%d", &e[i]->employeeID);	
		printf("------------------------");
	}
	return 0;
}
	

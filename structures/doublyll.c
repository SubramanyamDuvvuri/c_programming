#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
typedef struct book
{
	char title[MAX];
	float price;
}book;


typedef struct dlist
{
	struct dlist *left;
	 	book *info  ;
	struct dlist *right;
}dlist;

dlist* insert(dlist*);
dlist* display(dlist*);

int main ()
{
	int option;
	dlist * start=NULL;
	


	while(1)
	{
		printf("\nChoose on option\n");
		printf("1.Insert a NODE in the end\n2.Display all NODES\n3.Add a node at a position\n4.delete a node at a position\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:	
				start=insert(start);
				break;
			case 2:	
				start=display(start);
				break;
			default:
				printf("Invalid Number\n");
						

		}
	}
	return 0;
}


dlist* insert(dlist * start)
{
	dlist * ptr,*temp;
	char title[MAX];
	float price;
	ptr=start;
	
	if(start==NULL)
	{
		temp=(dlist*)malloc(sizeof(dlist));
		printf("Enter the book title \n");
		scanf("%s",title);
		printf("Enter the book cost\n");
		scanf("%f",&price);
		temp->info=(book*)malloc(sizeof(book));
		strcpy(temp->info->title,title);
		temp->info->price=price;
		temp->right=NULL;
		temp->left=NULL;
		start=temp;
		ptr=start;
		return start;
	}
	while(ptr->left!=NULL)
	{	
		ptr=ptr->left;
	}
	printf("Enter the book title \n");
	scanf("%s",title);
	printf("Enter the book cost\n");
	scanf("%f",&price);
	temp=(dlist*)malloc(sizeof(dlist));
	temp->info=(book*)malloc(sizeof(book));
	strcpy(temp->info->title,title);
	temp->info->price=price;
	ptr->right=temp;
	temp->left=ptr;	
	temp->right=NULL;
	return start;			

	

	
}

dlist* display(dlist *start)
{
	dlist *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%s ",ptr->info->title);
		printf("%f-->",ptr->info->price);
		ptr=ptr->right;
	}
	
	return start;	
}



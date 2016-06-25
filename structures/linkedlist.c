/*Linked list is a very common data structure often used to store
similar data in memory. While the elements of an array
occupy contiguous memory locations, those of a linked list
are not constrained to be stored in adjacent location. The
individual elements are stored “somewhere” in memory,
rather like a family dispersed, but still bound together. The
order of the elements is maintained by explicit links between
them. Thus, a linked list is a collection of elements called
nodes, each of which stores two item of information—an
element of the list, and a link, i.e., a pointer or an address that
indicates explicitly the location of the node containing the
successor of this list element.
Write a program to build a linked list by adding new nodes at
the beginning, at the end or in the middle of the linked list.
Also write a function display( ) which display all the nodes
present in the linked list.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct list
{	
	int info;
	struct list *link;
}list;


list* create (list*);
void display(list*);
list* createOne (list*);
list* insertBegin(list*);
list* deleteNode(list*);
int main()
{
	list* start;					//structure pointer
	start=NULL;
	int option;
	int info;
	while(1)
	{
		printf("\nChoose an option \n");
		printf("1.Create a node at the end\n2.Display the list \n3.Insert a node at a position\n4.delete a node at a position\n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 2:
				display(start);
				break;
			case 1:
				start=createOne(start);
				break;
			case 3:	
				insertBegin(start);
				break;	
			case 4:deleteNode(start);
				break;
				
			default:printf("Invalid number-----Try Again \n");
				
		}

	}

	return 0;

}
/*
list* create (list* start)
{
	int info,i;
	int nodes;
	list*ptr;
	ptr=start;
	list*temp=(list*)malloc(sizeof(list));
	printf("Enter the number of nodes to be inserted\n");
	scanf("%d",&nodes);
	for(i=0;i<nodes;i++)
	{
		if (start==NULL)
		{
			//printf("------>%d",start);
			printf("Enter the info\n");
			scanf("%d",&info);
			temp->info=info;
			temp->link=NULL;
			start=temp;
		
			//printf("--------->%d",start);

		}

		else
		{
			while(ptr!=NULL)
			{	
				ptr=ptr->link;
			}
				printf("Enter the info...\n");
				scanf("%d",&info);
				list*temp=(list*)malloc(sizeof(list));
				temp->info=info;
				ptr=temp;
			
		}

	}
	return start ;
} 
*/

void display(list * start)				//TO display all the nodes
{
 	list* ptr;
	ptr=start;
	//printf("******IN DISPLAY****%d---- %d",ptr,start );
	
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
		
	while(ptr!=NULL)
	{
		printf("%d-->",ptr->info);
		
		ptr=ptr->link;
	}
	
}

list* createOne(list* start)
{
	list* temp;
	list *ptr;
	int info;
	ptr=start;
	if(start==NULL)
	{
		temp=(list*)malloc(sizeof(list));
		printf("Enter info\n");
		scanf("%d",&info);
		temp->info=info;
		temp->link=NULL;
		start=temp;
		
		return start;
	}

	while(ptr->link!=NULL)
	{
		ptr=ptr->link;

	}
	
	temp=(list*)malloc(sizeof(list));  		//Each time memory has to be allocated
	printf("Enter info\n");
	scanf("%d",&info);
	temp->info=info;
	temp->link=NULL;
	ptr->link=temp;					//putting the node into the list
	return start;
}


list* insertBegin(list * start)
{
	list* ptr,*temp;
	int pos,info;
ptr=start;
	if(start==NULL)
	{
		printf("List is empty,Choose option 1 for general insertion\n");
		return start;
	}
	printf("Insert the position \n ");
	scanf("%d",&pos);
	
	while(pos!=0)
	{
		ptr=ptr->link;
		pos--;	
	}

	temp = (list*)malloc(sizeof(list));
	printf("Enter info");
	scanf("%d",&info);
	temp->info=info;
	temp->link=ptr->link;
	ptr->link=temp;
	return start;
}

list* deleteNode(list* start)
{
	
	list*ptr,*ptr1;
	int pos;
	printf("Enter the position at which node has to be deleted\n");
	scanf("%d",&pos);
	ptr=start;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}
	
	while(pos-1!=0)
	{
		ptr=ptr->link;
		pos--;	
	}

	ptr1=ptr;
	ptr=ptr->link;
	ptr1->link=ptr->link;
	free(ptr);
	return start;
}





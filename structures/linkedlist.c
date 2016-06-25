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
int main()
{
	list* start;
	start=NULL;
	int option;
	int info;
	while(1)
	{
		printf("Choose an option \n");
		printf("1.Create a node\n2.Display the list \n3.Insert a node in the middle\n4.Insert a node in the end\n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1: 
				start=create (start);
				//printf("in main--case1-->%d",start);
				break;
			case 2:
				//printf("in main--case2-->%d",start);
				printf("-----3-------%d",start);

				display(start);
				break;
			case 3:	printf("----5--------%d",start);

				start=createOne(start);
				break;
			default:printf("Invalid number-----Try Again \n");
				
		}

	}

	return 0;

}
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


void display(list * start)
{
 	list* ptr;
	ptr=start;
	//printf("******IN DISPLAY****%d---- %d",ptr,start );
		printf("-----4444--------%d",start);
	
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
		
	while(ptr!=NULL)
	{
		printf("%d,",ptr->info);
		
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
		
		printf("-------1------%d",start);
		return start;
	}

	while(ptr!=NULL)
	{
		ptr=ptr->link;

	}
	
	temp=(list*)malloc(sizeof(list));
	printf("Enter info\n");
	scanf("%d",&info);
	temp->info=info;
	temp->link=NULL;
	ptr->link=temp;
	printf("------2------%d",start);

	
}
	

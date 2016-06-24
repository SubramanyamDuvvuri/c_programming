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


void create ( list* , int);


int main()
{
	list* START;
	START=NULL;
	int option;
	int info;
	int num

	while(1)
	{
		printf("Choose an option \n");
		printf("1.Create a node\n2.Insert a nodeint the beginning \n3.Insert a node in the middle\n4.Insert a node in the end\n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1: printf("Enter the number of nodes to be created\n");
				scanf("%d",&num);
				create (START,info);
				break;

			default:printf("Invalid number-----Try Again \n");
				
		}

	}

	return 0;

}



void create ( list * START, int num)
{
	int info;
	list*ptr;
	ptr=start;
	list*temp=(list*)malloc(sizeof(list));
	for(i=0;i<num;i++)
	{
		if (ptr->link==NULL)
			{
				printf("Enter the info\n")
				scanf("%d",&info);
				temp->info=info;
				temp->link=NULL;
				ptr=temp;
			}
			else
				ptr=ptr->link;
		}
} 




		
		
